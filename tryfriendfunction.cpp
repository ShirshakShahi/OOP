#include <iostream>
using namespace std;
class Time
{
    int hr, min, sec;

public:
    void getD();
    void showD();
    friend void addT(Time T1, Time T2);
};
void Time::getD()
{
    cout << "Enter time in HOUR, MUNUTES and SECOND FORMAT " << endl;
    cin >> hr >> min >> sec;
}
void Time::showD()
{
    cout << "Your time is " << hr << " hours " << min << " minutes and " << sec << "  secoonds " << endl;
}
void addT(Time T1, Time T2)
{
    Time T3;
    T3.sec = T1.sec + T2.sec;
    T3.min = T3.sec / 60;
    T3.sec = T3.sec % 60;
    T3.min = T3.min + T1.min + T2.min;
    T3.hr = T3.min / 60;
    T3.min = T3.min % 60;
    T3.hr = T3.hr + T1.hr + T2.hr;
    cout << "After addition " << endl;
    T3.showD();
}
int main()
{
    Time x, y;
    x.getD();
    y.getD();
    x.showD();
    y.showD();
    addT(x, y);
    return 0;
}