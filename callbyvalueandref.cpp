#include <iostream>
using namespace std;
void swap(int *a, int *b);
int main()
{
    int x, y;
    cout << "Enter value of x ";
    cin >> x;
    cout << "Enter value of y ";
    cin >> y;
    cout << endl;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    swap(&x, &y);
    cout << "The value of x after swap is " << x << " and the value of y after swap is " << y << endl;
    return 0;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}