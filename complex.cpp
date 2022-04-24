#include <iostream>
#include <conio.h>
using namespace std;
class Complex
{
    int real, image;

public:
    void getData();
    void showData();
};
void Complex::getData()
{
    cout << "Enter real and imaginary part " << endl;
    cin >> real >> image;
    showData();
}
void Complex::showData()
{
    cout << "Your imaginary number is " << real << "+" << image << "i" << endl;
}
int main()
{
    Complex C;
    C.getData();
    return 0;
}
