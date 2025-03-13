// Write a program to enter the length of array and print the all values of array.

#include <iostream>
using namespace std;

int main()
{
    int i, n;

    cout << endl << "Write a program to enter the length of array and print the all values of array." << endl << endl;

    cout << "Enter the length of array : ";
    cin >> n;

    int a[n];

    cout << endl;

    for ( i = 0 ; i < n ; i++ )
    {
        cout << "Enter the value at the index number " << i << " : ";
        cin >> a[i];
    }

    cout << endl << "Here is the entered values of the array" << endl << endl;

    for ( i = 0 ; i < n ; i++ )
    {
        cout << "Value at the index number a[" << i << "] = " << a[i] << endl;
    }

    cout << endl;
}