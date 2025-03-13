#include <iostream>
using namespace std;

double selection(int &choice)
{
    cout << endl
         << "OPTIONS" << endl
         << endl;

    cout << "1 : CREATE THE ARRAY" << endl
         << "2 : READ THE ARRAY" << endl
         << "3 : INSERTION IN THE ARRAY" << endl
         << "4 : UPDATE THE ARRAY ELEMENT" << endl
         << "5 : DELETE THE ARRAY ELEMENT" << endl
         << "6 : EXIT THE PROGRAM" << endl
         << endl;

    cout << "Select the right option : ";
    cin >> choice;
}

double creation(int a[], int &size)
{
    cout << endl
         << "Enter the size of array : ";
    cin >> size;

    cout << endl
         << "ENTER ELEMENTS IN ARRAY" << endl
         << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "A[" << i << "] : ";
        cin >> a[i];
    }
}

double reading(int a[], int &size)
{
    if (size == 0)
    {
        cout << endl
             << "ERROR : CREATE ARRAY FIRST" << endl;
    }

    else
    {
        cout << endl
             << "ENTERED ELEMENTS OF ARRAY" << endl
             << endl;

        for (int i = 0; i < size; i++)
        {
            cout << "A[" << i << "] = " << a[i] << endl;
        }
    }
}

double insertion(int a[], int &size)
{
    int index, value;

    if (size == 0)
    {
        cout << endl
             << "ERROR : CREATE ARRAY FIRST." << endl;
    }
    else
    {
        cout << endl
             << "Enter the index number for insertion : ";
        cin >> index;

        if (index < 0 || index > size)
        {
            cout << endl
                 << "ERROR : INVALID INDEX" << endl;
        }
        else
        {
            cout << endl
                 << "Enter the value : ";
            cin >> value;

            for (int i = size; i > index; i--)
            {
                a[i] = a[i - 1];
            }
            a[index] = value;
            size++;
        }
    }
}

double update(int a[], int &size)
{
    if (size == 0)
    {
        cout << endl
             << "ERROR : CREATE ARRAY FIRST." << endl;
    }

    else
    {
        int index, value;

        cout << endl
             << "Enter the index number for update : ";
        cin >> index;

        if (index >= 0 && index < size)
        {
            cout << endl
                 << "Enter the value : ";
            cin >> value;

            a[index] = value;
        }

        else
        {
            cout << endl
                 << "ERROR : INVALID INDEX." << endl;
        }
    }
}

double deletion(int a[], int &size)
{
    if (size == 0)
    {
        cout << endl
             << "ERROR : CREATE ARRAY FIRST." << endl;
    }

    else
    {
        int index;

        cout << endl
             << "Enter the index number for delete element : ";
        cin >> index;

        if (index >= 0 && index < size)
        {
            for (int i = index; i < size - 1; i++)
            {
                a[i] = a[i + 1];
            }
            size--;

            cout << endl
                 << "ELEMENT DELETED SUCCESSFULLY." << endl;
        }

        else
        {
            cout << endl
                 << "ERROR : INVALID INDEX." << endl;
        }
    }
}

int main()
{
    int size = 0, choice;
    int a[size];

    do
    {
        selection(choice);

        switch (choice)
        {
        case 1:
            creation(a, size);
            break;

        case 2:
            reading(a, size);
            break;

        case 3:
            insertion(a, size);
            break;

        case 4:
            update(a, size);
            break;

        case 5:
            deletion(a, size);
            break;

        case 6:
            cout << endl << "PROGRAM ENDED SUCCESSFULLY... THANK YOU...!!!" << endl << endl;
            break;

        default :
            cout << endl << "ERROR : ENTER VALID OPTION." << endl;
            break;
        }
    } while (choice != 6);
}