#include <iostream>
#include <conio.h>
using namespace std;
class Rational
{
    int num, den;

public:
    void getData();
    void displayData();
    void convert();
    void invert();
};
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
    cout << "The given rational numer in real number is " << ((num*1.0) / den) << endl;
}
void Rational::invert()
{
    int temp;
    temp = num;
    num = den;
    den = temp;
}
int main()
{
    Rational R;
    R.getData();
    R.displayData();
    R.convert();
    R.invert();
    R.displayData();
    R.convert();
    getch();
    return 0;
}