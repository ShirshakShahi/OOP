#include <iostream>
using namespace std;
class Rational
{
    int num, den;

public:
    Rational();
    Rational(int, int);
    Rational(Rational &x);
    void show()
    {
        cout << "Rational no is " << num << " / " << den << endl;
    }
};
Rational::Rational()
{
    num = 56;
    den = 12;
}
Rational::Rational(int a, int b)
{
    num = a;
    den = b;
}
Rational::Rational(Rational &x)
{

    num = x.s;
    den = x.t;
}
int main(){
    int s,t;
    cout<<"Enter s and t "<<endl;
    cin>>s>>t;
    Rational A(),B(s,t),C(B);
    B.show();
    C.show();
    return 0;
}