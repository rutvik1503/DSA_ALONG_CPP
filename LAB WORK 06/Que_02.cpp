// Write a Program to find the average of a 1D array.

#include <iostream>
using namespace std;

int main()
{
    int i, n, sum = 0, avg;

    cout << endl << "Write a Program to find the average of a 1D array." << endl << endl;

    cout << "Enter the length of array : ";
    cin >> n;

    int a[n];

    cout << endl << "Enter the values of array" << endl << endl;

    for ( i = 0 ; i < n ; i++ )
    {
        cout << "Enter the value at the index number " << i << " : ";
        cin >> a[i];
    }

    cout << endl;

    for ( i = 0 ; i < n ; i++ )
    {
        sum = sum + a[i];
    }

    avg = sum / n;

    cout << "The avaerage of the 1D array = " << avg << endl << endl;
}