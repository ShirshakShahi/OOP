#include <iostream>
#include <conio.h>
using namespace std;
class Time
{
    int hour, min;

public:
    void getTime();
    void displayTime();
    Time calcTime(Time T1, Time T2);
};
void Time::getTime()
{
    cout << "Enter your time in hours and minutes format " << endl;
    cin >> hour >> min;
}
void Time::displayTime()
{
    cout << "Your time is " << hour << " hours and " << min << " minutes" << endl;
}
Time Time::calcTime(Time T1, Time T2)
{
    Time T3;
    T3.min = T1.min + T2.min;
    T3.hour = T3.min / 60;
    T3.min = T3.min % 60;
    T3.hour = T3.hour + T1.hour + T2.hour;
    return T3;
}
int main()
{
    Time T1, T2, T3;
    T1.getTime();
    T2.getTime();
    T1.displayTime();
    T2.displayTime();
    T3 = T1.calcTime(T1, T2);
    cout << "After calculations, the final time is as :" << endl;
    T3.displayTime();

    return 0;
}