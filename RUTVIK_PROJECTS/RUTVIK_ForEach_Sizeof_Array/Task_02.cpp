#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << endl << "Enter the size of array : ";
    cin >> size;

    cout << endl << "Enter the value in the array A" << endl << endl;

    int a[size];

    for (int i = 0 ; i < size ; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    cout << endl << "Total size of array A : " << sizeof(a) << " bytes" << endl << endl;

    cout << "Size of one element : " << sizeof(a[0]) << " bytes" << endl << endl;

    cout << "Total number of elements : " << size << endl << endl;

    return 0;
}
