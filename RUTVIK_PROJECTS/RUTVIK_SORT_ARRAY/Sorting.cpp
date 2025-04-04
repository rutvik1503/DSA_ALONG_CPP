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

    cout << endl;
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
         << "5 : QUICK SORT" << endl
         << endl;

    cout << "Which sorting mathod do you want to use? : ";
    cin >> choice;
}

void options2(int &choice2)
{
    cout << endl
         << "OPTIONS..." << endl
         << endl;

    cout << "1 : ASENDING ORDER" << endl
         << "2 : DESENDING ORDER" << endl
         << endl;

    cout << "In which order do you want to sort array? : ";
    cin >> choice2;
}

void bubble_sort_Asending(int a[], int size)
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

void bubble_sort_Desending(int a[], int size)
{
    int temp;

    cout << endl
         << "SORT ARRAY USING BUBBLE SORT..." << endl;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                temp = a[j];

                a[j] = a[j + 1];

                a[j + 1] = temp;
            }
        }
    }

    print_arr(a, size);
}

void insertion_sort_Asending(int a[], int size)
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

void insertion_sort_Desending(int a[], int size)
{
    cout << endl
         << "SORT ARRAY USING INSERTION SORT..." << endl;

    for (int i = 1; i < size; i++)
    {
        int current = a[i];
        int prev = i - 1;

        while (prev >= 0 && a[prev] < current)
        {
            a[prev + 1] = a[prev];
            prev--;
        }

        a[prev + 1] = current;
    }

    print_arr(a, size);
}

void selection_sort_Asending(int a[], int size)
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

void selection_sort_Desending(int a[], int size)
{
    cout << endl
         << "SORT ARRAY USING SELECTION SORT..." << endl;

    for (int i = 0; i < size - 1; i++)
    {
        int small = i;
        for (int j = i + 1; j < size; j++)
        {
            if (a[j] > a[small])
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

void merge_sort_Asending(int arr[], int start, int mid, int end)
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

void merge_sort_Desending(int arr[], int start, int mid, int end)
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

void devide_array_Asending(int arr[], int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;

        devide_array_Asending(arr, start, mid);
        devide_array_Asending(arr, mid + 1, end);

        merge_sort_Asending(arr, start, mid, end);
    }
}

void devide_array_Desending(int arr[], int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;

        devide_array_Desending(arr, start, mid);
        devide_array_Desending(arr, mid + 1, end);

        merge_sort_Desending(arr, start, mid, end);
    }
}

int partition_Asending(int a[], int start, int end)
{
    int pivot = a[end];
    int i = start - 1;

    for (int j = start; j < end; j++)
    {
        if (a[j] < pivot)
        {
            i++;
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    int temp = a[i + 1];
    a[i + 1] = a[end];
    a[end] = temp;

    return i + 1;
}

int partition_Desending(int a[], int start, int end)
{
    int pivot = a[end];
    int i = start - 1;

    for (int j = start; j < end; j++)
    {
        if (a[j] > pivot)
        {
            i++;
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    int temp = a[i + 1];
    a[i + 1] = a[end];
    a[end] = temp;

    return i + 1;
}

void quick_sort_Asending(int a[], int start, int end)
{
    if (start < end)
    {
        int pi = partition_Asending(a, start, end);

        quick_sort_Asending(a, start, pi - 1);
        quick_sort_Asending(a, pi + 1, end);
    }
}

void quick_sort_Desending(int a[], int start, int end)
{
    if (start < end)
    {
        int pi = partition_Desending(a, start, end);

        quick_sort_Desending(a, start, pi - 1);
        quick_sort_Desending(a, pi + 1, end);
    }
}

int main()
{
    int size, choice, choice2;

    cout << endl
         << "Enter size of array : ";
    cin >> size;

    int a[size];

    enter_element(a, size);

    options(choice);

    switch (choice)
    {
    case 1:
        do
        {
            options2(choice2);
            switch (choice2)
            {
            case 1:
                bubble_sort_Asending(a, size);
                break;

            case 2:
                bubble_sort_Desending(a, size);
                break;

            default:
                cout << endl
                     << "ERROR : INVALID OPTION..!!! CHOOSE RIGHT OPTION..." << endl;
                break;
            }
        } while (choice2 != 1 && choice2 != 2);

        break;

    case 2:
        do
        {
            options2(choice2);
            switch (choice2)
            {
            case 1:
                insertion_sort_Asending(a, size);
                break;

            case 2:
                insertion_sort_Desending(a, size);
                break;

            default:
                cout << endl
                     << "ERROR : INVALID OPTION..!!! CHOOSE RIGHT OPTION..." << endl;
                break;
            }
        } while (choice2 != 1 && choice2 != 2);
        break;

    case 3:
        do
        {
            options2(choice2);
            switch (choice2)
            {
            case 1:
                selection_sort_Asending(a, size);
                break;

            case 2:
                selection_sort_Desending(a, size);
                break;

            default:
                cout << endl
                     << "ERROR : INVALID OPTION..!!! CHOOSE RIGHT OPTION..." << endl;
                break;
            }
        } while (choice2 != 1 && choice2 != 2);
        break;

    case 4:
        do
        {
            options2(choice2);
            switch (choice2)
            {
            case 1:
                devide_array_Asending(a, 0, size - 1);
                break;

            case 2:
                devide_array_Desending(a, 0, size - 1);
                break;

            default:
                cout << endl
                     << "ERROR : INVALID OPTION..!!! CHOOSE RIGHT OPTION..." << endl;
                break;
            }
        } while (choice2 != 1 && choice2 != 2);
        cout << endl
             << "SORT ARRAY USING MERGE SORT..." << endl;
        print_arr(a, size);
        break;

    case 5:
        do
        {
            options2(choice2);
            switch (choice2)
            {
            case 1:
                quick_sort_Asending(a, 0, size - 1);
                break;

            case 2:
                quick_sort_Desending(a, 0, size - 1);
                break;

            default:
                cout << endl
                     << "ERROR : INVALID OPTION..!!! CHOOSE RIGHT OPTION..." << endl;
                break;
            }
        } while (choice2 != 1 && choice2 != 2);
        cout << endl
             << "SORT ARRAY USING MERGE SORT..." << endl;
        print_arr(a, size);
        break;

    default:
        cout << endl
             << "ERROR : CHOOSE RIGHT OPTION...!!!" << endl
             << endl;
        break;
        return 0;
    }
}