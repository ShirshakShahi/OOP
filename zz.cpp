// breakfast
#include <iostream>
using namespace std;
int main()
{
    int ch;
    int n;
    cout << "\n\n          * * * * * WELCOME TO SHAHI RESTRO * * * * * " << endl;
    cout << "\nPlace your Order for Breakfast" << endl
         << "We have: " << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << "|| #41.Berries..........................................$12  ||" << endl;
    cout << "|| #32.Cold Cereal......................................$13  ||" << endl;
    cout << "|| #11.Cottage Cheese...................................$12  ||" << endl;
    cout << "|| #54.Eggs.............................................$8   ||" << endl;
    cout << "|| #90.Green Tea........................................$14  ||" << endl;
    cout << "|| #16.Oat Meal.........................................$12  ||" << endl;
    cout << "|| #67.Peanut Butter....................................$12  ||" << endl;
    cout << "-------------------------------------------------------------" << endl
         << endl;
    cout << "\n Enter the Code for Food You want to have " << endl;
    cin >> ch;

    switch (ch)
    {
    case 41:
        cout << "The price for your Berries is $12" << endl;
        break;

    case 32:
        cout << "The price for your Cold Cereal is $12" << endl;
        break;

    case 11:
        cout << "The price for your Cottage Cheese is $12" << endl;
        break;

    case 54:
        cout << "The price for your Eggs is $12" << endl;
        break;

    case 90:
        cout << "The price for your GreenTea is $12" << endl;
        break;

    case 16:
        cout << "The price for your Oatmeals  is $12" << endl;
        break;

    case 67:
        cout << "The price for your Peanut Butter is $12" << endl;
        break;
    default:
        cout << "Choose the food labelled from 1 to 7 " << endl;
        break;
    }

    cout << "\nPlease Enter Here to pay--->>>" << endl;
    cin >> n;
    if (n == ch)
    {
        cout << "You have paid for your item and You can now Check out" << endl
             << " ! ! ! ! ! ! ! ! ! ! !THANK YOU FOR CHOOSING US ! ! ! ! ! ! ! ! ! ! !" << endl;
    }
    else
    {
        cout << "Please ENTER same Food Code " << endl;
    }

    return 0;
}