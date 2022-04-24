#include <iostream>
using namespace std;
class Distance
{
    int km, m;

public:
    void getDist();
    void showData();
    Distance addD(Distance D1, Distance D2);
};
void Distance::getDist()
{
    cout << "Enter distance in km and m format " << endl;
    cin >> km >> m;
}
void Distance::showData()
{
    cout << "Your distance is " << km << " km and  " << m << " meters." << endl;
}
Distance Distance::addD(Distance D1, Distance D2)
{
    Distance D3;
    D3.m = D1.m + D2.m;
    D3.km = D3.m / 1000;
    D3.m = D3.m % 1000;
    D3.km = D3.km + D1.km + D2.km;
    return D3;
}
int main()
{

    Distance x, y, z;
    x.getDist();
    y.getDist();
    x.showData();
    y.showData();
    z = x.addD(x, y);
    cout << "After Addition " << endl;
    z.showData();
    return 0;
}