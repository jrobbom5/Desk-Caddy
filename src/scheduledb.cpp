#include <Arduino.h>
#include <ArduinoJson.h>
#include <SPIFFS.h>
#include <ESP32Time.h>
#include "time.h"
#include "scheduledb.h"
#include "pilldb.h"

ScheduleEntry::ScheduleEntry (struct tm alarmTime, int pillNumber, float quantity, int entryNumber)
{
    mAlarmTime   = alarmTime;
    mPillNumber  = pillNumber;
    mQuantity    = quantity;
    mEntryNumber = entryNumber;
}

String ScheduleEntry::getDate (void)
{
    return String (mAlarmTime.tm_mday) + "/" + String (mAlarmTime.tm_mon);
}

String ScheduleEntry::getTime (void)
{
    char time[6];
    sprintf (time, "%02d:%02d", mAlarmTime.tm_hour, mAlarmTime.tm_min);
    return String (time);
}

int ScheduleEntry::getDays (void)
{
    return mAlarmTime.tm_yday;
}

int ScheduleEntry::getMinutes (void)
{
    return mAlarmTime.tm_hour * 60 + mAlarmTime.tm_min;
}

int ScheduleEntry::getPillNumber (void)
{
    return mPillNumber;
}

float ScheduleEntry::getQuantity (void)
{
    return mQuantity;
}

int ScheduleEntry::getEntryNumber (void)
{
    return mEntryNumber;
}

int Schedule::addScheduleEntry (struct tm alarmTime, int pillNumber, float quantity)
{
    if (mLastEntry == MAX_SCHEDULE_ENTRIES - 1)
    {
        return -1;
    }

    if (findScheduleEntry (alarmTime, pillNumber, quantity) >= 0)
    {
        return -1;
    }

    mLastEntry++;
    Serial.println ("addScheduleEntry. mLastEntry = " + String (mLastEntry));

    mpScheduleList[mLastEntry] = new ScheduleEntry (alarmTime, pillNumber, quantity, mLastEntry + 1);
    return 0;
}

int Schedule::findScheduleEntry (struct tm alarmTime, int number, float quantity)
{
    String date    = String (alarmTime.tm_mday) + "/" + String (alarmTime.tm_mon);
    int    minutes = alarmTime.tm_hour * 60 + alarmTime.tm_min;
    for (int i = 0; i < mLastEntry; i++)
    {
        if (mpScheduleList[i]->getDate () == date && mpScheduleList[i]->getMinutes () == minutes && mpScheduleList[i]->getPillNumber () == number && mpScheduleList[i]->getQuantity () == quantity)
        {
            return i;
        }
    }
    return -1;
}

int Schedule::findScheduleEntry (int entryNumber)
{
    for (int i = 0; i <= mLastEntry; i++)
    {
        if (mpScheduleList[i]->getEntryNumber () == entryNumber)
        {
            return i;
        }
    }
    return -1;
}

int Schedule::deleteScheduleEntry (struct tm alarmTime, int number, float quantity)
{
    int index = findScheduleEntry (alarmTime, number, quantity);
    if (index < 0)
    {
        return index;
    }
    delete mpScheduleList[index];
    for (int i = index; i < mLastEntry; i++)
    {
        mpScheduleList[i] = mpScheduleList[i + 1];
    }
    mLastEntry--;
    return 0;
}

int Schedule::deleteScheduleEntry (int entryNumber)
{
    // Serial.println ("Before Delete:");
    // mDumpSchedule ();
    int index = findScheduleEntry (entryNumber);
    if (index < 0)
    {
        return index;
    }

    delete mpScheduleList[index];
    for (int i = index; i < mLastEntry; i++)
    {
        mpScheduleList[i] = mpScheduleList[i + 1];
    }
    mLastEntry--;
    // Serial.println ("After Delete:");
    // mDumpSchedule ();
    return 0;
}

int Schedule::entryCount (void)
{
    return mLastEntry + 1;
}

int Schedule::readScheduleDB ()
{
    extern ESP32Time               rtc;
    struct tm rtcTimeinfo = rtc.getTimeStruct ();
    struct tm        alarmTime     = rtcTimeinfo;
    int              minutes       = rtcTimeinfo.tm_hour * 60 + rtcTimeinfo.tm_min;
    int              recordsLoaded = 0;

    Serial.println ("Beginning read ScheduleDB. mLastEntry = " + String (mLastEntry));
    File fh = SPIFFS.open (SCHEDULEDB_FILE);
    if (!fh)
    {
        Serial.println ("Failed to open schedule db for reading");
        return -1;
    }

    DynamicJsonDocument  doc (MAX_SCHEDULEDB_SIZE);
    DeserializationError err = deserializeJson (doc, fh);
    if (err)
    {
        Serial.println ("Failed to parse schedule.db file: " + String (err.f_str ()));
        return -1;
    }

    for (JsonObject ScheduleEntry : doc["Schedule"].as<JsonArray> ())
    {
        if (mLastEntry == MAX_SCHEDULE_ENTRIES - 1)
        {
            Serial.println ("MAX_SCHEDULE_ENTRIES Exceeded. Aborting.....");
            while (1)
                ;
        }

        String time       = ScheduleEntry["time"].as<String> ();
        alarmTime.tm_hour = time.substring (0, 2).toInt ();
        alarmTime.tm_min  = time.substring (3, 5).toInt ();
        int recordMinutes = alarmTime.tm_hour * 60 + alarmTime.tm_min;
        if (minutes < recordMinutes)
        {
            int   pillNumber = ScheduleEntry["pillNumber"];
            float quantity   = ScheduleEntry["quantity"];

            addScheduleEntry (alarmTime, pillNumber, quantity);
            recordsLoaded++;
            Serial.println ("  New Schedule Record Loaded...");
        }
    }
    close (fh);

    sortSchedule ();
    mDumpSchedule ();

    return recordsLoaded;
}

int compareScheduleEntries (const void* a, const void* b)
{
    ScheduleEntry** x = (ScheduleEntry**)a;
    ScheduleEntry** y = (ScheduleEntry**)b;

    int returnValue = (*x)->getDays () - (*y)->getDays ();
    if (!returnValue)
    {
        returnValue = (*x)->getMinutes () - (*y)->getMinutes ();
    }
    if (!returnValue)
    {
        returnValue = (*x)->getPillNumber () - (*y)->getPillNumber ();
    }
    return (returnValue);
}

void Schedule::sortSchedule (void)
{
    if (mLastEntry > 0)
    {
        qsort (mpScheduleList, mLastEntry, sizeof (ScheduleEntry*), &compareScheduleEntries);
    }
}

void Schedule::mDumpSchedule (void)
{
    for (int i = 0; i <= mLastEntry; i++)
    {
        Serial.println (String (mpScheduleList[i]->getEntryNumber ()) + " --> " + String (mpScheduleList[i]->getDate ()) + " " + String (mpScheduleList[i]->getMinutes ()) + ": " + String (mpScheduleList[i]->getPillNumber ()) + ", " + String (mpScheduleList[i]->getQuantity ()));
    }
}

String Schedule::getOverdueEntriesJson (void)
{
    extern PillList*    pPills;
    DynamicJsonDocument doc (2000);
    JsonArray           overdue      = doc.createNestedArray ("overdue");
    String              returnString = "";

    Serial.println ("Entering getOverdueEntriesJson");

    for (int i = 0; i <= mLastEntry; i++)
    {
        if (isRecordOverdue (mpScheduleList[i]) == false)
        {
            break;
        }

        int    entryNumber = mpScheduleList[i]->getEntryNumber ();
        String name        = pPills->getPillName (mpScheduleList[i]->getPillNumber ());
        float  dose        = pPills->getDoseMg (mpScheduleList[i]->getPillNumber ());

        overdue[i]["entryNumber"] = entryNumber;
        overdue[i]["date"]        = mpScheduleList[i]->getDate ();
        overdue[i]["time"]        = mpScheduleList[i]->getTime ();
        overdue[i]["pillName"]    = name;
        overdue[i]["doseMg"]      = dose;
        overdue[i]["quantity"]    = mpScheduleList[i]->getQuantity ();
    }

    serializeJson (doc, returnString);
    return (returnString);
}

String Schedule::getUpcomingEntriesJson (void)
{
    extern PillList*    pPills;
    DynamicJsonDocument doc (2000);
    JsonArray           upcoming      = doc.createNestedArray ("upcoming");
    String              returnString = "";

    Serial.println ("Entering getUpcomingEntriesJson");

    int index = 0;
    for (int i = 0; i <= mLastEntry; i++)
    {
        if (isRecordOverdue (mpScheduleList[i]) == true)
        {
            continue;
        }

        int    entryNumber = mpScheduleList[i]->getEntryNumber ();
        String name        = pPills->getPillName (mpScheduleList[i]->getPillNumber ());
        float  dose        = pPills->getDoseMg (mpScheduleList[i]->getPillNumber ());

        upcoming[index]["entryNumber"] = entryNumber;
        upcoming[index]["date"]        = mpScheduleList[i]->getDate ();
        upcoming[index]["time"]        = mpScheduleList[i]->getTime ();
        upcoming[index]["pillName"]    = name;
        upcoming[index]["doseMg"]      = dose;
        upcoming[index]["quantity"]    = mpScheduleList[i]->getQuantity ();
        index ++;
    }

    serializeJson (doc, returnString);
    Serial.println ("getUpcomingEntriesJson: " + returnString);
    return (returnString);
}


bool Schedule::isRecordOverdue (ScheduleEntry* entry)
{
    extern ESP32Time rtc;
    struct tm        rtcTimeinfo = rtc.getTimeStruct ();

    int minutes = rtcTimeinfo.tm_hour * 60 + rtcTimeinfo.tm_min;
    int days    = rtcTimeinfo.tm_yday;

    if (entry->getDays () >= days
        && entry->getMinutes () > minutes)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int Schedule::checkOverdueEntries (int* overdueBy, int* recordsOverdue)
{
    *recordsOverdue = 0;
    if (mLastEntry < 0)
    {
        return -1;
    }
    extern ESP32Time rtc;
    struct tm        rtcTimeinfo = rtc.getTimeStruct ();
    int              minutes     = rtcTimeinfo.tm_hour * 60 + rtcTimeinfo.tm_min;
    *overdueBy                   = minutes - mpScheduleList[0]->getMinutes ();

    for (int i = 0; i <= mLastEntry; i++)
    {
        // Serial.println ("i = " + String (i));
        if (isRecordOverdue (mpScheduleList[i]) == true)
        {
            // Serial.println ("  Record is overdue");
            (*recordsOverdue)++;
        }
        else
        {
            return 0;
        }
    }

    return 0;
}