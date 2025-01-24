// Create a program to find meinimum value from three values...

#include <iostream>
using namespace std;

int main()
{
    int a,b,c;

    //Take input from the user...
    cout << endl << "Enter the value of A : ";
    cin >> a;

    cout << endl << "Enter the value of B : ";
    cin >> b;

    cout << endl << "Enter the value of c : ";
    cin >> c;

    if (a < b)
    {
        if ( a < c)
        {
            cout << endl << "A is min value..." << endl << endl;
        }
        else
        {
            cout << endl << "C is min value..." << endl << endl;
        }
    }
    else
    {
        if ( b < c)
        {
            cout << endl << "B is min value..." << endl << endl;
        }
        else
        {
            cout << endl << "C is min value..." << endl << endl;
        }
    }
}