// Develop a program that finds all the negative elements from a given 1D array.

#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << endl << "Enter the size of array : ";
    cin >> size;

    int a[size];

    cout << endl << "Enter the values in the array" << endl << endl;

    for (int i = 0 ; i < size ; i++)
    {
        cout << "Enter value of a[" << i << "] : ";
        cin >> a[i];
    }

    cout << endl << "Entered values of array A" << endl << endl;

    for (int i = 0 ; i < size ; i++)
    {
        cout << "a[" << i << "] = " << a[i] << endl;
    }

    cout << endl << "Nagatives values from array A" << endl << endl;
 
    for (int i = 0 ; i < size ; i++)
    {
        if (a[i] < 0)
        {
            cout << "a[" << i << "] = " << a[i] << endl;
        }
    } 

    cout << endl;
}