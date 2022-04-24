#include <iostream>
using namespace std;
class Btime;

class ATime
{
    int h, min;

public:
    void getD()
    {
        cin >> h >> min;
    }
    void showD()
    {
        cout << h << "hrs and " << min << " minutes" << endl;
    }
    ATime addTime(Btime B);
};
class Btime
{
    int a, b;

public:
    void getT()
    {
        cin >> a >> b;
    }
    void showT()
    {
        cout << a << "hrs and " << b << " minutes" << endl;
    }
    friend ATime ATime::addTime(Btime B);
};
ATime ATime::addTime(Btime B)
{
    ATime c;
    c.min = min + B.b;
    c.h = c.min / 60;
    c.min = c.min % 60;
    c.h = c.h + h + B.a;

    return c;
}
int main()
{
    ATime x, y;
    Btime z;
    x.getD();
    z.getT();
    x.showD();
    z.showT();
    cout << "After add" << endl;
    y = x.addTime(z);
    y.showD();
    return 0;
}