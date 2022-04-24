#include <iostream>
using namespace std;
#include <conio.h>
#include <cmath>
class Circle
{
    int radius;

public:
    void getrad();
    void Area();
    void Circum();
};
void Circle::getrad()
{
    cout << "Enter the radius of the circle " << endl;
    cin >> radius;
}
void Circle::Area()
{
    cout << "Area of circle is " << (3.14 * pow(radius, 2)) << endl;
}
void Circle::Circum()
{
    cout << "The circmference of the area is " << (2 * 3.14 * radius);
}
int main()
{
    Circle C;
    C.getrad();
    C.Area();
    C.Circum();
    getch();
    return 0;
}