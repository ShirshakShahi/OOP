#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
class Person
{
    char name[20];
    int age;
    char gender[10];
    long int telePhone;

public:
    void getData();
    void displayData();
};
void Person::getData()
{
    cout << "Enter your name " << endl;
    cin >> name;
    fflush(stdin);
    cout << "Enter your age " << endl;
    cin >> age;
    cout << "Your gender " << endl;
    cin >> gender;
    cout << "Enter your telephone number " << endl;
    cin >> telePhone;
}

void Person::displayData()
{
    cout << "Your name is " << name << endl;
    cout << "Your age is " << age << endl;
    cout << "Your gender is " << gender << endl;
    cout << "Your phone number is " << telePhone << endl;
}
int main()
{
    Person P;
    P.getData();
    P.displayData();
    getch();
    return 0;
}