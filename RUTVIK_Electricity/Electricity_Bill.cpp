#include <iostream>
using namespace std;

int main()
{
    float unit, price, total_price, bill;

    cout << endl << "Enter total units : ";
    cin >> unit;

    cout << endl << "Total units = " << unit << endl << endl;

    if (unit <= 50)
    {
        price = unit * 0.5;
    }

    if (unit > 50 && unit <= 150)
    {
        price = unit * 0.75;
    }

    if (unit > 150 && unit <= 250)
    {
        price = unit * 1.20;
    }

    if (unit > 250)
    {
        price = unit * 1.50;
    }

    total_price = price * 0.2;

    bill = price + total_price;

    cout << "Bill = " << bill << endl << endl;
}