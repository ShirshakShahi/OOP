#include <iostream>
#include <conio.h>
using namespace std;

class Complexnum
{
    int real, image;

public:
    void getData();
    void showData();
    Complexnum addData(Complexnum c1, Complexnum c2);
};
void Complexnum::getData()
{
    cout << "Enter real part and then imaginary part " << endl;
    cin >> real >> image;
}
void Complexnum::showData()
{
    cout << "Your complex number is " << real << " + " << image << " i " << endl;
}
Complexnum Complexnum::addData(Complexnum c1, Complexnum c2)
{
    Complexnum C3;
    C3.real = c1.real + c2.real;
    C3.image = c1.image + c2.image;
    return C3;
}
int main()
{
    Complexnum x, y, z;
    x.getData();
    x.showData();
    y.getData();
    y.showData();
    z = x.addData(x, y);
    cout << "After addition your final product is as " << endl;
    z.showData();
    return 0;
}