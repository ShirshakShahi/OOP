#include <iostream>
using namespace std;
class Swap
{
    int a, b;

public:
    Swap()
    {
        a = 0;
        b = 0;
    }
    Swap(int x, int y)
    {
        a = x;
        b = y;
    }
    void showA()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
    friend void letsSwap(Swap);
};

void letsSwap(Swap A)
{
    int temp;
    temp = A.a;
    A.a = A.b;
    A.b = temp;
    cout << "a = " << A.a << endl
         << "b =" << A.b << endl;
}

int main()
{
    Swap S(64, 5);
    S.showA();
    cout << "After swapping " << endl;
    letsSwap(S);
    return 0;
}