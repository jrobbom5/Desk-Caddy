#ifndef MYTIMEDATE_H
#define MYTIMEDATE_H

#include <time.h>
#include <ESP32Time.h>
#define TIME_CHECK_INTERVAL 10 * 60 // seconds

class myTimeDate
{
public:
    myTimeDate (void);
    void init (void);
    String getTimeString (void);
    String getDay (void);
    int    getMDay (void);
    int    getHour (void);
    String getMonth (void);
    String getAMPM (void);
    void   updateNTPTime (bool force);

private:
    struct tm mNTPTime;
    struct tm mRTCTime;
};

#endif