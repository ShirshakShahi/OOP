#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
class Complex
{
    int real, image;

public:
    void getVal();
    void showVal();
    void addC(Complex c1, Complex c2);
};
void Complex::getVal()
{
    cout << "Enter real part of your complex number: ";
    cin >> real;
    cout << "Enter imaginary part of your complex number: ";
    cin >> image;
}
void Complex::showVal()
{
    cout << "Your entered value of complex number is " << real << " + " << image << " i " << endl;
}
void Complex::addC(Complex c1, Complex c2)
{
    real = c1.real + c2.real;
    image = c1.image + c2.image;
}
int main()
{
    system("cls");
    Complex a, b;
    a.getVal();
    a.showVal();
    b.getVal();
    b.showVal();
    a.addC(a, b);
    cout << "After addition " << endl;
    a.showVal();

    return 0;
}