#include <Arduino.h>
#include <ArduinoJson.h>
#include <SPIFFS.h>
#include "pilldb.h"

Pill::Pill (int pillNumber, String pillName, float doseMg)
{
    mPillNumber = pillNumber;
    mPillName = pillName;
    mDoseMg = doseMg;
}

int Pill::getPillNumber (void)
{
    return mPillNumber;
}

String Pill::getPillName (void)
{
    return mPillName;
}

float Pill::getDoseMg (void)
{
    return mDoseMg;
}


int PillList::addPill (int pillNumber, String pillName, float doseMg)
{
    if (mLastEntry == MAX_PILLS - 1)
    {
        return -1;
    }
    if (findPill (pillNumber) >= 0)
    {
        return -1;
    }
    mpPillArray [++mLastEntry] = new Pill (pillNumber, pillName, doseMg);
    return 0;
}

int PillList::findPill (int pillNumber)
{
    for (int i = 0; i <= mLastEntry; i++)
    {
        if (mpPillArray[i]->getPillNumber() == pillNumber)
        {
            return i;
        }
    }
    return -1;
}

int PillList::deletePill (int pillNumber)
{
    int index = findPill (pillNumber);
    if (index < 0)
    {
        return index;
    }
    delete mpPillArray[index];
    for (int i = index; i < mLastEntry; i ++)
    {
        mpPillArray [i] = mpPillArray [i + 1];
    }
    mLastEntry--;
    return 0;
}

int PillList::pillCount (void)
{
    return mLastEntry + 1;
}

int PillList::readPillsDB ()
{
    File fh = SPIFFS.open(PILLSDB_FILE);
    if (!fh)
    {
        Serial.println("Failed to open pills db for reading");
        return -1;
    }

    DynamicJsonDocument doc(MAX_PILLSDB_SIZE);
    DeserializationError err = deserializeJson(doc, fh);
    if (err)
    {
        Serial.println("Failed to parse pills.db file: " + String (err.f_str()));
        return -1;
    }

        // JsonObject obj = doc.as<JsonObject>();
    for (JsonObject pill : doc["Pills"].as<JsonArray>())
    {
        int number = pill["number"].as<int>();
        String name = pill["name"].as<String>();
        float dose = pill["dose"].as<float>();
        Serial.println (String (number) + ": " + name + " " + String (dose));
        if (PillList::addPill (number, name, dose))
        {
            Serial.println("Failed to add pill to pillsList");
            return -1;
        }
    }
    close (fh);
    return 0;
}

String PillList::getPillName (int pillNumber)
{
    // Serial.println ("Looking for pillNumber " + String (pillNumber));
    for (int i = 0; i <= mLastEntry; i++)
    {
        // Serial.println ("Entry " + String (i) + " is number " + String (mpPillArray[i]->getPillNumber()));
        if (mpPillArray[i]->getPillNumber() == pillNumber)
        {
            return mpPillArray[i]->getPillName();
        }
    }
    return "Not Found";
}

float PillList::getDoseMg (int pillNumber)
{
    // Serial.println ("Looking for pillNumber " + String (pillNumber));
    for (int i = 0; i <= mLastEntry; i++)
    {
        // Serial.println ("Entry " + String (i) + " is number " + String (mpPillArray[i]->getPillNumber()));
        if (mpPillArray[i]->getPillNumber() == pillNumber)
        {
            return mpPillArray[i]->getDoseMg();
        }
    }
    return -1;
}
