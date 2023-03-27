#ifndef     PILL_DB_H
#define     PILL_DB_H

#define     MAX_PILLSDB_SIZE        512
#define     PILLSDB_FILE            "/pills.json"
#define     MAX_PILLS               15

class Pill
{
    public:
        Pill (int pillNumber, String pillName, float doseMg);
        int getPillNumber (void);
        String getPillName (void);
        float getDoseMg (void);

    private:
        int     mPillNumber;
        String  mPillName;
        float   mDoseMg;
};

class PillList
{
    public:
        int addPill (int pillNumber, String pillName, float doseMg);
        int findPill (int pillNumber);
        int deletePill (int pillNumber);
        int pillCount (void);
        int readPillsDB ();
        String getPillName (int);
        float getDoseMg (int);

    private:
        Pill    *mpPillArray [MAX_PILLS];
        int     mLastEntry = -1;
};

#endif
