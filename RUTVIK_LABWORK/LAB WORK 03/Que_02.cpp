// Write a Program to print the factorial of number N using a for loop.

#include <iostream>
using namespace std;

int main()
{
    cout << endl << "Write a Program to print the factorial of number N using a for loop." << endl << endl;

    int i, n, factorial = 1;

    cout << "Enter the value of N : ";
    cin >> n;

    cout << endl;

    for ( i = 1 ; i <= n ; i++)
    {
        factorial = factorial * i;
    }

    cout << "Factorial of 1 to " << n << " is " << factorial << endl << endl;
}