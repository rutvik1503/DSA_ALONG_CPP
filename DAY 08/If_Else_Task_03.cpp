// Create a program to find meinimum value from four values...

#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d;

    //Take input from the user...
    cout << endl << "Enter the value of A : ";
    cin >> a;

    cout << endl << "Enter the value of B : ";
    cin >> b;

    cout << endl << "Enter the value of C : ";
    cin >> c;

    cout << endl << "Enter the value of D : ";
    cin >> d;

    if (a < b)
    {
        if ( a < c)
        {
            if ( a < d)
            {
                cout << endl << "A is min value...";
            }
            else
            {
                cout << endl << "D is min value";
            }
        }
        else
        {
            if ( c < d)
            {
                cout << endl << "C is min value...";
            }
            else
            {
                cout << endl << "D is min value...";
            }
        }
    }

    else
    {
        if ( b < c)
        {
            if ( b < d)
            {
                cout << endl << "B is min value...";
            }
            else
            {
                cout << endl << "D is min value";
            }
        }
        else
        {
            if ( c < d)
            {
                cout << endl << "C is min value...";
            }
            else
            {
                cout << endl << "D is min value...";
            }
        }
    }
}