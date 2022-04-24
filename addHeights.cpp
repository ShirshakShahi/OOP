#include <iostream>
using namespace std;
class Height
{
    int feet, inch;

public:
    void getData();
    void showData();
    Height addData(Height H1, Height H2);
};
void Height::getData()
{
    cout << "Enter your height in FEET and INCH format " << endl;
    cin >> feet >> inch;
}
void Height::showData()
{
    cout << "Your height is " << feet << " feet and " << inch << " inches." << endl;
}
Height Height::addData(Height H1, Height H2)
{
    Height H3;
    H3.inch = H1.inch + H2.inch;
    H3.feet = H3.inch / 12;
    H3.inch = H3.inch % 12;
    H3.feet = H3.feet + H1.feet + H2.feet;
    return H3;
}
int main()
{
    Height x, y, z;
    x.getData();
    y.getData();
    x.showData();
    y.showData();
    z = x.addData(x, y);
    cout << "After addition of your two HEIGHTS >>> " << endl;
    z.showData();
    return 0;
}