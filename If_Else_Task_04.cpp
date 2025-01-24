// Create a program to find meinimum value from five values...

#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d,e;

    //Take input from the user...
    cout << endl << "Enter the value of A : ";
    cin >> a;

    cout << endl << "Enter the value of B : ";
    cin >> b;

    cout << endl << "Enter the value of C : ";
    cin >> c;

    cout << endl << "Enter the value of D : ";
    cin >> d;

    cout << endl << "Enter the value of E : ";
    cin >> e;

    if (a < b)
    {
        if ( a < c)
        {
            if ( a < d)
            {
                if ( a < e)
                {
                    cout << endl << "A is min value...";
                }
                else
                {
                    cout << endl << "E is min Value...";
                }
            }
            else
            {
               if ( d < e)
                {
                    cout << endl << "D is min value...";
                }
                else
                {
                    cout << endl << "E is min Value...";
                } 
            }
        }
        else
        {
            if ( c < d)
            {
                if ( c < e)
                {
                    cout << endl << "C is min value...";
                }
                else
                {
                    cout << endl << "E is min Value...";
                }
            }
            else
            {
               if ( d < e)
                {
                    cout << endl << "D is min value...";
                }
                else
                {
                    cout << endl << "E is min Value...";
                } 
            }
        }
    }

    else
    {
        if ( b < c)
        {
            if ( b < d)
            {
                if ( b < e)
                {
                    cout << endl << "B is min value...";
                }
                else
                {
                    cout << endl << "E is min Value...";
                }
            }
            else
            {
               if ( d < e)
                {
                    cout << endl << "D is min value...";
                }
                else
                {
                    cout << endl << "E is min Value...";
                } 
            }
        }
        else
        {
            if ( c < d)
            {
                if ( c < e)
                {
                    cout << endl << "C is min value...";
                }
                else
                {
                    cout << endl << "E is min Value...";
                }
            }
            else
            {
               if ( d < e)
                {
                    cout << endl << "D is min value...";
                }
                else
                {
                    cout << endl << "E is min Value...";
                } 
            }
        }
    }
}