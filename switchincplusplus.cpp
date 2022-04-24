#include <iostream.>
#include <conio.h>
#include <stdlib.h>
#include <cmath>
using namespace std;
class Person
{
    char name[20];
    int age;
    char gender[10];
    long int telePhone;

public:
    void getData();
    void displayData();
};
class Rational
{
    int num, den;

public:
    void getData();
    void displayData();
    void convert();
    void invert();
};
class Point
{
    int x, y, z;

public:
    void getData();
    void displayData();
    void calcDistance();
};
class Circle
{
    int radius;

public:
    void getrad();
    void Area();
    void Circum();
};
void Person::getData()
{
    cout << "Enter your name " << endl;
    cin >> name;
    fflush(stdin);
    cout << "Enter your age " << endl;
    cin >> age;
    cout << "Your gender " << endl;
    cin >> gender;
    cout << "Enter your telephone number " << endl;
    cin >> telePhone;
}

void Person::displayData()
{
    cout << "Your name is " << name << endl;
    cout << "Your age is " << age << endl;
    cout << "Your gender is " << gender << endl;
    cout << "Your phone number is " << telePhone << endl;
}
void Rational::getData()
{
    cout << "Enter numerator and denominator " << endl;
    cin >> num >> den;
}
void Rational::displayData()
{
    cout << "The rational number is " << num << "/" << den << endl;
}
void Rational::convert()
{
    cout << "The given rational numer in real number is " << ((num * 1.0) / den) << endl;
}
void Rational::invert()
{
    int temp;
    temp = num;
    num = den;
    den = temp;
}
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
    int ch;
    Person P;
    Rational R;
    Point S;
    Circle C;
    cout << "Enter your choice which homework you want to do " << endl;
    cout << "1.PersonInfo\t2.Rational\t3.Point \t4.Circle" << endl;
    cin >> ch;
    {
        switch (ch)
        {
        case 1:
            P.getData();
            P.displayData();
            break;

        case 2:
            R.getData();
            R.displayData();
            R.convert();
            R.invert();
            R.displayData();
            R.convert();
            break;

        case 3:
            S.getData();
            S.displayData();
            S.calcDistance();
            break;

        case 4:
            C.getrad();
            C.Area();
            C.Circum();
            break;
        }

        getch();
        return 0;
    }
}