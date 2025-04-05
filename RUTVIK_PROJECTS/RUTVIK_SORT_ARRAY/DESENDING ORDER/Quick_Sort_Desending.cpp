#include <iostream>
using namespace std;

int partition(int a[], int start, int end)
{
    int pivot = a[start];

    int i = start + 1;

    for (int j = start + 1 ; j <= end ; j++)
    {
        if (a[j] > pivot)
        {
            swap(a[i], a[j]);
            i++;
        }
    }

    swap(a[start],a[i - 1]);
    
    return i - 1;
}

void quick_sort(int a[], int start, int end)
{
    if (start < end)
    {
        int pi = partition(a, start, end);

        quick_sort(a, start, pi - 1);
        quick_sort(a, pi + 1, end);
    }
}

int main()
{
    int n;

    cout << endl
         << "Enter size of array: ";
    cin >> n;

    int a[n];

    cout << endl
         << "ENTER ELEMENTS IN ARRAY" << endl
         << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "A[" << i << "] = ";
        cin >> a[i];
    }

    quick_sort(a, 0, n - 1);

    cout << endl
         << "SORTED ARRAY: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl
         << endl;
    ;
    return 0;
}
