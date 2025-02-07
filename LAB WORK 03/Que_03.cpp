// Write a Program to perform the addition operation of two 1D arrays & store it in another array. Keep in mind that both array sizes must be the same.

#include <iostream>
using namespace std;

int main()
{
    int i, n;

    cout << endl << "Write a Program to perform the addition operation of two 1D arrays & store it in another array. Keep in mind that both array sizes must be the same." << endl << endl;
    

    cout << "Enter the length of array : ";
    cin >> n;

    int a[n], b[n], c[n];

    cout << endl;

    for ( i = 0 ; i < n ; i++ )
    {
        cout << "Enter the value at the A[" << i << "] : ";
        cin >> a[i];
    }

    cout << endl;

    for ( i = 0 ; i < n ; i++ )
    {
        cout << "Enter the value at the B[" << i << "] : ";
        cin >> b[i];
    }

    cout << endl << "Here is the entered values of the array A & B." << endl << endl;

    for ( i = 0 ; i < n ; i++ )
    {
        cout << "Value at the A[" << i << "] = " << a[i] << endl;
    }

    cout << endl;

    for ( i = 0 ; i < n ; i++ )
    {
        cout << "Value at the B[" << i << "] = " << a[i] << endl;
    }

    cout << endl << "Here is the some of aray A & B in the array C" << endl;

    for ( i = 0 ; i < n ; i++ )
    {
        c[i] = a[i] + b[i];
    }

    cout << endl;

    for ( i = 0 ; i < n ; i++ )
    {
        cout << "Value at the C[" << i << "] = " << c[i] << endl;
    }

    cout << endl;
}
