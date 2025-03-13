// Write a Program to print the Fibonacci series up to N numbers using a for loop

#include <iostream>
using namespace std;

int main()
{
    int f = 1, s = -1, t, i, n;

    cout << endl << "Enter the last degit : ";
    cin >> n;

    cout << endl;
    for (i = 1; i <= n; i++)
    {
        t = f + s;

        cout << t << "  ";

        s = f;

        f = t;

    }
    cout << endl << endl;
}