#include<iostream>
using namespace std;

void merge_sort(int arr[], int start, int mid, int end)
{
    int len1 = mid - start + 1;
    int len2 = end - mid;

    int temp1[len1];
    int temp2[len2];

    for (int i = 0; i < len1; i++)
    {
        temp1[i] = arr[start + i];
    }

    for (int i = 0; i < len2; i++)
    {
        temp2[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = start;

    while (i < len1 && j < len2)
    {
        if (temp1[i] > temp2[j])
        {
            arr[k] = temp1[i];
            i++;
        }
        else
        {
            arr[k] = temp2[j];
            j++;
        }
        k++;
    }

    while (i < len1)
    {
        arr[k] = temp1[i];
        i++;
        k++;
    }

    while (j < len2)
    {
        arr[k] = temp2[j];
        j++;
        k++;
    }
}

void divide_array(int arr[], int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;

        divide_array(arr, start, mid);
        divide_array(arr, mid + 1, end);
        merge_sort(arr, start, mid, end);
    }
}

int main()
{
    int size;

    cout << endl << "Enter size of array: ";
    cin >> size;

    int arr[size];

    cout << endl << "Enter elements in array" << endl << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "A[" << i << "]: ";
        cin >> arr[i];
    }

    divide_array(arr, 0, size - 1);

    cout << endl << "Sorted Array: ";
    
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl << endl;;

    return 0;
}
