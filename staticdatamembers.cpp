#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count;

public:
    void setData()
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getData()
    {
        cout << "The id of this employee is " << id << " and this employee number is" << count << endl;
    }
};
int Employee::count;

int main()
{
    Employee Shirshak, Somash, Sumina;
    Shirshak.setData();
    Shirshak.getData();

    Somash.setData();
    Somash.getData();

    Sumina.setData();
    Sumina.getData();
    return 0;
}
