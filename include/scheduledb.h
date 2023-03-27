#ifndef SCHEDULE_DB_H
#define SCHEDULE_DB_H

#define MAX_SCHEDULEDB_SIZE  1500
#define SCHEDULEDB_FILE      "/schedule.json"
#define MAX_SCHEDULE_ENTRIES 15

class ScheduleEntry
{
public:
    ScheduleEntry (struct tm alarmTime, int pillNumber, float quantity, int entryNumber);
    String getDate (void);
    String getTime (void);
    int    getDays (void);
    int    getMinutes (void);
    int    getPillNumber (void);
    float  getQuantity (void);
    int    getEntryNumber (void);

private:
    struct tm mAlarmTime;
    int       mPillNumber;
    float     mQuantity;
    int       mEntryNumber;
};

class Schedule
{
public:
    int    addScheduleEntry (struct tm alarmTime, int pillNumber, float quamtity);
    int    findScheduleEntry (struct tm alarmTime, int pillNumber, float quantity);
    int    findScheduleEntry (int entryNumber);
    int    deleteScheduleEntry (struct tm alarmTime, int pillNumber, float quantity);
    int    deleteScheduleEntry (int entryNumber);
    int    entryCount (void);
    int    readScheduleDB (void);
    void   sortSchedule (void);
    String getOverdueEntriesJson (void);
    String getUpcomingEntriesJson (void);
    int    checkOverdueEntries (int* overdueBy, int* recordsOverdue);
    bool   isRecordOverdue (ScheduleEntry* entry);

private:
    void mDumpSchedule (void);

    ScheduleEntry* mpScheduleList[MAX_SCHEDULE_ENTRIES];
    int            mLastEntry = -1;
};

#endif