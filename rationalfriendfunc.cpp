#include <iostream>
using namespace std;
class Rational
{
    int num, den;

public:
    void getR();
    void showR();
    friend Rational add(Rational A, Rational B);
};
void Rational::getR()
{
    cout << "Enter numerator and denominator " << endl;
    cin >> num >> den;
}
void Rational::showR()
{
    cout << "The Rational number is " << num << " / " << den << endl;
}
Rational add(Rational A, Rational B)
{
    Rational C;
    C.num = ((A.num * B.den) + (B.num * A.den));
    C.den = A.den * B.den;
    return C;
}
int main()
{
    Rational x, y, z;
    x.getR();
    y.getR();
    x.showR();
    y.showR();
    z = add(x, y);
    cout << "After addition " << endl;
    z.showR();
    return 0;
}