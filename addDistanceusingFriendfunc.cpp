#include <iostream>
using namespace std;
class Distance
{
    int km, m;

public:
    void getData();
    void showData();
    friend void addDistance(Distance D1, Distance D2);
};
void Distance::getData()
{
    cout << "Enter your distance " << endl;
    cin >> km >> m;
}
void Distance::showData()
{
    cout << "Your distance is " << km << " kilometers and " << m << " meters. " << endl;
}
void addDistance(Distance D1, Distance D2)
{
    Distance D3;
    D3.m = D1.m + D2.m;
    D3.km = D3.m / 1000;
    D3.m = D3.m % 1000;
    D3.km = D3.km + D1.km + D2.km;
    cout << "After addition we get " << endl;
    D3.showData();
}
int main()
{
    Distance x, y;
    x.getData();
    y.getData();
    x.showData();
    y.showData();
    addDistance(x, y);
    return 0;
}