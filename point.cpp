#include <iostream>
using namespace std;
#include <conio.h>
#include <cmath>
class Point
{
    int x, y, z;

public:
    void getData();
    void displayData();
    void calcDistance();
};
void Point::getData()
{
    cout << "Enter the values of x, y and z" << endl;
    cin >> x >> y >> z;
}
void Point::displayData()
{
    cout << "Given points are " << endl;
    cout << "(" << x << "," << y << "," << z << ")" << endl;
}
void Point::calcDistance()
{
    cout << "The distance to the point from origin is " << (sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2))) << endl;
}
int main()
{
    Point P;
    P.getData();
    P.displayData();
    P.calcDistance();
    getch();
    return 0;
}