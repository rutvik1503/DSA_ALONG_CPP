// Write a Program to print the sum of all numbers from 1 to N using a for loop.

#include <iostream>
using namespace std;

int main()
{
    int i, n, sum = 0;

    cout << endl << "Write a Program to print the sum of all numbers from 1 to N using a for loop." << endl << endl;

    cout << "Enter the value of N : ";
    cin >> n;

    cout << endl;

    for ( i = 1 ; i <= n ; i++ )
    {
        sum = sum + i;
    }

    cout << "Sum of 1 to " << n << " is " << sum << endl << endl;
}