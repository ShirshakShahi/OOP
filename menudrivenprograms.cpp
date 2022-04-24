#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a, b;
    int choice;
    cout << "_____________________________________________" << endl;
    cout << "\n   *******SIMPLE MENU DRIVEN PROGRAM******* " << endl;
    cout << "_____________________________________________" << endl;
    cout << "\n           your choices are as " << endl;
    cout << "_____________________________________________" << endl;
    cout << endl;
    cout << "\n1.Sum of two integers\n\n2.Differences between two integers\n\n3.Multiplication between two integers\n"
         << endl;
    cout << "select any one ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "a= ";
        cin >> a;
        cout << "b= ";
        cin >> b;
        cout << "The sum is \t" << a + b << endl;
        break;

    case 2:
        cout << "a= ";
        cin >> a;
        cout << "b= ";
        cin >> b;
        cout << "The Subtraction is  \t" << a - b << endl;
        break;

    case 3:
        cout << "a= ";
        cin >> a;
        cout << "b= ";
        cin >> b;
        cout << "The Multiplication is \t" << a * b << endl;
        break;
    }
    getch();
}