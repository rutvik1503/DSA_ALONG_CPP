#include<iostream>
using namespace std;

int main()
{
    int n = 5;

    cout << endl << "Enter size of array : ";
    cin >> n;

    int a[n];

    cout << endl << "ENTER ELEMENTS IN ARRAY" << endl << endl;

    for (int i = 0 ; i < n ; i++)
    {
        cout << "A[" << i << "] = ";
        cin >> a[i];
    }    

    for (int i = 0 ; i < n - 1 ; i++)
    {
        int sort = i;
        int key = a[i + 1];

        while (sort >= 0 && a[sort] > key)
        {
            a[sort + 1] = a[sort];
            sort--;
        }

        a[sort + 1] = key;
        
    }
    
    cout << endl << "SORTED ARRAY : ";

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl << endl;    
}