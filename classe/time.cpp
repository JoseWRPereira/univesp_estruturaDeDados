#include <iostream>
#include "time.h"

using namespace std;


// Getters
int Time::getHour() const
{
    return( hour );
}

int Time::getMinute() const
{
    return( minute );
}

int Time::getSecond() const
{
    return( second );
}

// Setters
void Time::setHour(int h)
{
    this->hour = h;
}
void Time::setMinute(int m)
{
    this->minute = m;
}
void Time::setSecond(int s)
{
    this->second = s;
}

void Time::print() const
{
    cout << hour << ":" << minute << ":" << second << endl;
}

void Time::nextSecond()
{
    if( ++second >= 60 )
    {
        second = 0;
        if( ++minute >= 60 )
        {
            minute = 0;
            if( ++hour >= 24 )
            {
                hour = 0;
            }
        }
    }
}

Time::Time( int h, int m, int s ) : hour(h), minute(m), second(s)
{
}
