#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << endl << "Enter the size of array A : ";
    cin >> size;

    int a[size];
    int *p[size];

    cout << endl << "Enter the elements in the array A" << endl << endl;

    for (int i = 0 ; i < size ; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
        p[i] = &a[i];
    }

    cout << endl << "Entered elements and the address of elements." << endl << endl;

    for (int i = 0 ; i < size ; i++)
    {
        cout << "&a[" << i << "] = " << p[i] << " | a[" << i << "] = " << *p[i] << endl;
    }

    cout << endl;
}