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
        int smallest = i;

        for (int j = i + 1; j < n; j++)
        {
            if(a[j] < a[smallest])
            {
                smallest = j;
            }
        }
        int temp = a[i];

        a[i] = a[smallest];

        a[smallest] = temp;
    }
    
    cout << endl << "SORTED ARRAY : ";

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl << endl;    
}