//Write a Program to print and find the sum of all boundary elements from a given 5x5 2D array.

#include <iostream>
using namespace std;

int main()
{
    cout << endl << "Write a Program to print and find the sum of all boundary elements from a given 5x5 2D array." << endl << endl;

    int row, col, a[5][5], size = 5, sum = 0;
    
    cout << "Enter the elements in the 5x5 array..." << endl << endl;

    for (row = 0 ; row < size ; row++)
    {
        for (col = 0 ; col < size ; col++)
        {
            cout << "Enter the value at a[" << row << "][" << col << "] : ";
            cin >> a[row][col];
        }
    }

    cout << endl << "Here is entered values array A..." << endl << endl;

    for (row = 0 ; row < size ; row++)
    {
        // Loop for column
        for (col = 0 ; col < size ; col++)
        {
            cout << a[row][col] << " "; 
        }
        cout << endl;
    }

    cout << endl << "Here is boundry elements..." << endl << endl;

    for (row = 0 ; row < size ; row++)
    {
        for (col = 0 ; col < size ; col++)
        {
            if (row == 0 || row == size - 1 || col == 0 || col == size - 1)
            {
                cout << a[row][col] << " ";
                sum += a[row][col];
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    cout << endl << "Sum of boundry elements = " << sum << endl << endl;
}