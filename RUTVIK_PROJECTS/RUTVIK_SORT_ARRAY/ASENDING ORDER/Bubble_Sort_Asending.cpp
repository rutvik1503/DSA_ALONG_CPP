#include<iostream>
using namespace std;

void bubble_sort (int a[], int & size)
{
    int temp;

    cout << endl << "SORTED ARRAY USING BUBBLE SORT..." << endl;

    for (int i = 0 ; i < size - 1 ; i++)
    {
        for (int j = 0 ; j < size - 1 ; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];

                a[j] = a[j + 1];
                
                a[j + 1] = temp;
            }
            
        }
    }

    cout << endl << "ARRAY : ";

    for (int i = 0 ; i < size ; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl << endl;    
}

int main()
{
    int size;

    cout << endl << "Enter size of array : ";
    cin >> size;

    int a[size];

    cout << endl << "ENTER ELEMENTS IN ARRAY..." << endl << endl;

    for (int i = 0; i < size ; i++)
    {
        cout << "A[" << i << "] : ";
        cin >> a[i];
    }

    bubble_sort(a, size);
    return 0;
}