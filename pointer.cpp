#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    int a = 3;
    int *b = &a;
    cout << "The address of address is " << b << endl;
    cout << "The value of address is " << *b << endl;

    return 0;
}