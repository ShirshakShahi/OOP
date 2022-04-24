#include <iostream>
#include <conio.h>
using namespace std;
class Time
{
    int hour, min;

public:
    void getTime();
    void displayTime();
    void calcTime(Time T1, Time T2);
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
void Time::calcTime(Time T1, Time T2)
{
    min = T1.min + T2.min;
    hour = min / 60;
    min = min % 60;
    hour = hour + T1.hour + T2.hour;
}
int main()
{
    Time T1, T2, T3;
    T1.getTime();
    T2.getTime();
    T1.displayTime();
    T2.displayTime();
    T3.calcTime(T1, T2);
    cout << "After calculations, the final time is as :" << endl;
    T3.displayTime();

    return 0;
}