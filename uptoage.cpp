#include <iostream>
#include <conio.h>
using namespace std;
class Student
{
    char name[50];
    char address[50];
    int age;

public:
    void getInfo();
    void displayInfo();
};
void Student::getInfo()
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter address:  ";
    cin >> address;
    cout << "Enter age:  ";
    cin >> age;
}
void Student::displayInfo()
{
    if (age > 18)
    {

        cout << "Name is " << name << endl;
        cout << "Address is " << address << endl;
        cout << "Age is " << age << endl;
    }
}
int main()
{
    Student S[100];
    int n;
    cout << "Enter number of students ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter information for Person no: " << (i + 1) << endl;

        S[i].getInfo();
    }
    for (int i = 0; i < n; i++)
    {
        cout << "The information of person no : " << (i + 1) << " is : " << endl;
        S[i].displayInfo();
    }
    getch();

    return 0;
}
