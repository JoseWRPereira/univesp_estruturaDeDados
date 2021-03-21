#ifndef TIME_H
#define TIME_H

class Time
{
    private:
        int hour;
        int minute;
        int second;
    public:
        Time( int hour = 0, int minute = 0, int second = 0 );
        int getHour() const;
        void setHour( int h );
        int getMinute() const;
        void setMinute( int m );
        int getSecond() const;
        void setSecond( int s );
        void print() const;
        void nextSecond();
};

#endif
