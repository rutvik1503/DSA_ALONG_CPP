//Create a menu - driven program to perform CRUD Operations on given 1D Array.

#include <iostream>
using namespace std;

int main()
{
    cout << endl << "Create a menu-driven program to perform CRUD Operations on given 1D Array." << endl << endl;

    int opt, i, update, newvalue, dlt, n = 5, a[n];

    for (i = 0 ; i < n ; i++)
    {
        a[i] = -1;
    }
    
    do
    {        
        cout << "Here is option for CRUD Operation..." << endl << endl;
    
        cout << "1 : Create" << endl;
        cout << "2 : Read" << endl;
        cout << "3 : Update" << endl;
        cout << "4 : Delete" << endl;
        cout << "5 : Exit Program" << endl;
    
        cout << endl << "Please select option from 1 to 5 : ";
        cin >> opt;
    
        cout << endl;

        switch ( opt )
        {
            case 1 : // For Create
                cout << endl << "Please enter any 5 values in the array" << endl << endl;

                for (i = 0 ; i < n ; i++)
                {
                    cout << "Enter value at a[" << i << "] : ";
                    cin >> a[i];
                }

                break;

            case 2 : // For read
                if (a[0] == -1)
                {
                    cout << "Please enter the values first." << endl << endl;
                    break ;
                }

                else
                {
                    cout << endl << "Here is the values that stored in array..." << endl << endl;

                    for (i = 0 ; i < n ; i++)
                    {
                        cout << "Value at a[" << i << "] = " << a[i] << endl;
                    }

                    break ;
                }                

            case 3 : // For Update
                if (a[0] == -1)
                {
                    cout << "Please enter the values first." << endl << endl;
                    break ;
                }

                else
                {
                    cout << "In which index of array value that you want to update : ";
                    cin >> update;

                    if (update >= 0 && update < n)
                    {
                        cout << endl << "Please enter the new value : ";
                        cin >> newvalue;

                        cout << endl;

                        a[update] = newvalue;

                        cout << "Array updated succesfully..." << endl << endl;
                    }

                    else
                    {
                        cout << "Please choose right index number from 0 to 4..." << endl << endl;
                    }

                    break ;
                }
                

            case 4 : // For Delete
                if (a[0] == -1)
                {
                    cout << "Plese enter the values first." << endl << endl;
                    break ;
                }          
                
                else
                {
                    cout << "In which index of array value that you want to delete : ";
                    cin >> dlt;

                    if(dlt >= 0 && dlt < n)
                    {
                        for (i = dlt ; i < n - 1 ; i++)
                        {
                            a[i] = a[i + 1];
                        }

                        n--;

                        cout << "Element deleted succesfully..." << endl << endl;
                    }

                    else
                    {
                        cout << "Please choose right index number from 0 to 4..." << endl << endl;
                    }

                    break ;
                }
            
            case 5 :
                cout << "Thank you for your response..." << endl << endl;

                break ;

            default :
                cout << "Invalid option....";
                break ;
        }
    } while (opt != 5);
    
}