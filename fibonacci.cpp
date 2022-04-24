#include <iostream>
#include <conio.h>
using namespace std;
int fibo(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
        return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    int a;

    cout << "Enter nt of terms:: ";
    cin >> a;
    cout << "\nThe fibonacci series is " << fibo(a) << endl;
    return 0;
}