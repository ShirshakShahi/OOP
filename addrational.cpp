#include <iostream>
using namespace std;
class Rational
{
    int num, den;

public:
    void getVal();
    void showVal();
    Rational addR(Rational A, Rational B);
};
void Rational::getVal()
{
    cout << "Enter numerator and denominator " << endl;
    cin >> num >> den;
}
void Rational::showVal()
{
    cout << "Your rational number is " << num << " / " << den << endl;
}
Rational Rational::addR(Rational A, Rational B)
{
    Rational C;
    C.num = ((A.num * B.den) + (B.num * A.den));
    C.den = (A.den * B.den);
    return C;
}
int main()
{


    
    Rational R1, R2, R3;
    R1.getVal();
    R2.getVal();
    R1.showVal();
    R2.showVal();
    R3 = R1.addR(R1, R2);
    cout << "After you add your two rational numbers you get " << endl;
    R3.showVal(); 
    return 0;
}