#include <iostream>
using namespace std;
class Complex
{
    int real, image;

public:
    void getData();
    void showData();
    Complex addD(Complex C1, Complex C2);
};
void Complex::getData()
{
    cout << "Enter the REAL and IMAGINARY parts of your Complex number " << endl;
    cin >> real >> image;
}
void Complex::showData()
{
    cout << "Your Complex number is " << real << " + " << image << "i" << endl;
}
Complex Complex::addD(Complex C1, Complex C2)
{
    Complex C3;
    C3.real = C1.real + C2.real;
    C3.image = C1.image + C2.image;
    return C3;
}
int main()
{

    Complex x, y, z;
    x.getData();
    y.getData();
    x.showData();
    y.showData();
    z = x.addD(x, y);
    cout << "After Addition of your Complex numbers " << endl;
    z.showData();
    return 0;
}