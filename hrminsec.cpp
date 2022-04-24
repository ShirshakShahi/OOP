#include <iostream>
using namespace std;
class Time
{
    int hr, min, sec;

public:
    void getTime();
    void displayTime();
    Time addTime(Time T1, Time T2);
};
void Time::getTime()
{
    cout << "Enter time in HOUR, MINUTES AND SEC format "<<endl;
    cin >> hr >> min >> sec;
}
void Time::displayTime()
{

    cout << "Your time is " << hr << " hours" << min << " minutes and " << sec << " seconds" << endl;
}
Time Time::addTime(Time T1, Time T2)
{
    Time T3;
    T3.sec = T1.sec + T2.sec;
    T3.min = T3.sec / 60;
    T3.sec = T3.sec % 60;
    T3.min = T3.min + T1.min + T2.min;
    T3.hr = T3.min / 60;
    T3.min = T3.min % 60;
    T3.hr = T3.hr + T1.hr + T2.hr;
    return T3;
}
int main()
{
    Time x, y, z;
    x.getTime();
    y.getTime();
    x.displayTime();
    y.displayTime();
    z = x.addTime(x, y);
    cout << "After you add your time >> " << endl;
    z.displayTime();
    return 0;
}