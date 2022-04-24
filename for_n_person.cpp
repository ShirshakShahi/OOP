#include <iostream>
#include <conio.h>
using namespace std;
class Person
{
    char name[50];
    char address[50];
    int age;

public:
    void getINfo();
    void displayInfo();
};
void Person::getINfo()
{
    cout << "Enter your name " << endl;
    cin >> name;
    cout << "Enter your address  " << endl;
    cin >> address;
    cout << "Can you tell me your age  " << endl;
    cin >> age;
}
void Person::displayInfo()
{
    cout << "Your name is " << name << endl;
    cout << "Your address is " << address << endl;
    cout << "Your age is " << age << endl;
}
int main()
{
    Person P[100];
    int n;
    cout << "Enter numbeer of students " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        P->getINfo();
    }
    for (int i = 0; i < n; i++)
    {
        P->displayInfo();
    }
    getch();

    return 0;
}