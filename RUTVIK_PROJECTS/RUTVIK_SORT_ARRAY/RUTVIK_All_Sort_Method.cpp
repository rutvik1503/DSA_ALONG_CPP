#include <iostream>
using namespace std;

void enter_element(int a[], int size)
{
    cout << endl
         << "ENTER ELEMENTS IN ARRAY..." << endl
         << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "A[" << i << "] : ";
        cin >> a[i];
    }

    cout << endl
         << endl;
}

void print_arr(int a[], int size)
{
    cout << endl
         << "SORTED ARRAY : ";

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl
         << endl;
}

void options(int &choice)
{
    cout << "OPTIONS..." << endl
         << endl;

    cout << "1 : BUBBLE SORT" << endl
         << "2 : INSERTION SORT" << endl
         << "3 : SELECTION SORT" << endl
         << "4 : MERGE SORT" << endl
         << endl;

    cout << "Which sorting mathod do you want to use? : ";
    cin >> choice;
}

void bubble_sort(int a[], int size)
{
    int temp;

    cout << endl
         << "SORT ARRAY USING BUBBLE SORT..." << endl;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];

                a[j] = a[j + 1];

                a[j + 1] = temp;
            }
        }
    }

    print_arr(a, size);
}

void insertion_sort(int a[], int size)
{
    cout << endl
         << "SORT ARRAY USING INSERTION SORT..." << endl;

    for (int i = 1; i < size; i++)
    {
        int current = a[i];
        int prev = i - 1;

        while (prev >= 0 && a[prev] > current)
        {
            a[prev + 1] = a[prev];
            prev--;
        }

        a[prev + 1] = current;
    }

    print_arr(a, size);
}

void selection_sort(int a[], int size)
{
    cout << endl
         << "SORT ARRAY USING SELECTION SORT..." << endl;

    for (int i = 0; i < size - 1; i++)
    {
        int small = i;
        for (int j = i + 1; j < size; j++)
        {
            if (a[j] < a[small])
            {
                small = j;
            }
        }
        int temp = a[i];

        a[i] = a[small];

        a[small] = temp;
    }

    print_arr(a, size);
}

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
        if (temp1[i] < temp2[j])
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

void quick_sort(int a[], int size) {}

int main()
{
    int size, choice;

    cout << endl
         << "Enter size of array : ";
    cin >> size;

    int a[size];

    enter_element(a, size);

    options(choice);

    switch (choice)
    {
    case 1:
        bubble_sort(a, size);
        break;

    case 2:
        insertion_sort(a, size);
        break;

    case 3:
        selection_sort(a, size);
        break;

    case 4:
        divide_array(a, 0, size - 1);
        cout << endl
             << "SORT ARRAY USING MERGE SORT..." << endl;
        print_arr(a, size);
        break;

    case 5:
        quick_sort(a, size);
        break;

    default:
        cout << endl
             << "ERROR : CHOOSE RIGHT OPTION...!!!" << endl
             << endl;
        break;
        return 0;
    }
}