#include <iostream>
using namespace std;
float SI(float P, float T, float R = 3);
int main()
{
    int S, x, y, z;
    cout << "Enter Principal,rate and time ";
    cin >> x >> y >> z;
    cout << "Without default arguments ";
    S = SI(x, y, z);
    cout << "SI without default arguments " << S << endl;
    cout << "With default arguments ";
    S = SI(x, y);
    cout << "With default arguments R=3 " << S << endl;

    return 0;
}