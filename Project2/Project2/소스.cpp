#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setfill;
using std::setw;

class Time {

public:
    Time();
    void setTime(int, int, int);
private:
    int hour;
    int minute;
    int second;
};

Time::Time()
{
    hour = minute = second = 0;
}

void Time::setTime(int h, int m, int s)
{
    hour = (h >= 0 && h < 24);
    minute = (m >= 0 && m < 60);
    second = (s >= 0 && s < 60);
}
