// Create a program to find meinimum value from two values...

#include <iostream>
using namespace std;

int main()
{
    int a,b;

    //Take input from the user...
    cout << endl << "Enter the value of A : ";
    cin >> a;

    cout << endl << "Enter the value of B : ";
    cin >> b;

    if (a < b)
    {
        cout << endl << "A is min value..." << endl << endl;
    }
    else
    {
        cout << endl << "B is min value..." << endl << endl;
    }
}