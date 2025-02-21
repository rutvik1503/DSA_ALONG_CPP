#include <iostream>
using namespace std;

int option(int &opt)
{
    cout << endl
         << "Here is option for CRUD Operation..." << endl
         << endl;

    cout << "1 : Create" << endl;
    cout << "2 : Read" << endl;
    cout << "3 : Update" << endl;
    cout << "4 : Delete" << endl;
    cout << "5 : Exit Program" << endl;

    cout << endl
         << "Please select option from 1 to 5 : ";
    cin >> opt;

    cout << endl;
}

int update_value(int &update, int a[], int n)
{
    int newvalue;

    cout << "In which index of array value that you want to update : ";
    cin >> update;

    if (update >= 0 && update < n)
    {
        cout << endl
             << "Please enter the new value : ";
        cin >> newvalue;

        cout << endl;

        a[update] = newvalue;

        cout << "Array updated succesfully..." << endl
             << endl;
    }

    else
    {
        cout << "Please choose right index number from 0 to 4..." << endl
             << endl;
    }
}

int delete_value(int &dlt, int a[], int &n)
{
    cout << "In which index of array value that you want to delete : ";
    cin >> dlt;

    if (dlt >= 0 && dlt < n)
    {
        for (int i = dlt; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }

        n--;

        cout << endl
             << "Element deleted succesfully..." << endl
             << endl;
    }

    else
    {
        cout << "Please choose right index number from 0 to 4..." << endl
             << endl;
    }
}

int main()
{
    int opt, i, update, newvalue, dlt, n = 5, a[n];

    for (i = 0; i < n; i++)
    {
        a[i] = -1;
    }

    do
    {
        option(opt);

        switch (opt)
        {
        case 1: // Create array
            cout << "Please enter any 5 values in the array" << endl
                 << endl;

            for (i = 0; i < n; i++)
            {
                cout << "Enter value at a[" << i << "] : ";
                cin >> a[i];
            }
            break;

        case 2: // read array
            if (a[0] == -1)
            {
                cout << "Enter the values first..." << endl
                     << endl;
                break;
            }

            else
            {
                for (i = 0; i < n; i++)
                {
                    cout << "a[" << i << "] = " << a[i] << endl;
                }
                break;
            }

        case 3: // update array
            if (a[0] == -1)
            {
                cout << "Enter the values first..." << endl
                     << endl;
                break;
            }

            else
            {
                update_value(update, a, n);
                break;
            }

        case 4: // delete elements
            if (a[0] == -1)
            {
                cout << "Enter the values first..." << endl
                     << endl;
                break;
            }

            else
            {
                delete_value(dlt, a, n);
                break;
            }

        default:
            cout << "Choose right option from 1 to 5" << endl
                 << endl;
            break;
        }
    } while (opt != 5);
}