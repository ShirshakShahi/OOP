#include <iostream>
using namespace std;
class Compare
{
    int num1, num2;

public:
    int getData(int a, int b);
    void displayData();
    Compare checkVar();
};
int Compare::getData(int a, int b)
{
    num1 = a;
    num2 = b;
}
void Compare::displayData()
{
    cout << "Your two numbers are " << num1 << " and " << num2 << endl;
}
Compare Compare::checkVar()
{
    if (num1 > num2)
    {
        cout << num1 << " is greater than " << num2 << endl;
    }
    else
    {
        cout << num2 << " is greater than " << num1 << endl;
    }
}
int main()
{
    Compare C1;
    int a, b;
    cout << "Enter two numbers " << endl;
    cin >> a >> b;
    C1.getData(a, b);
    C1.displayData();
    C1.checkVar();
    return 0;
}