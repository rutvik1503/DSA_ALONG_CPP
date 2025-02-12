// Develop a Program to find the largest element from a given 2D array

#include <iostream>
using namespace std;

int main()
{
    int row, rowsize, col, colsize;

    cout << endl << "Enter the size of row : ";
    cin >> rowsize;

    cout << "Enter the size of column : ";
    cin >> colsize;

    int a[rowsize][colsize];

    int max = a[0][0];

    cout << endl << "Enter values in the array A..." << endl << endl;

    for (row = 0 ; row < rowsize ; row++)
    {
        for (col = 0 ; col < colsize ; col++)
        {
            cout << "Enter value of a[" << row << "][" << col << "] = ";
            cin >> a[row][col];
        }
    }

    cout << endl << "Entered elements of the array A..." << endl << endl;

    for (row = 0 ; row < rowsize ; row++)
    {
        for (col = 0 ; col < colsize ; col++)
        {
            cout << a[row][col] << " ";
        }
        cout << endl;
    }

    cout << endl << "Largest number of array A : ";

    for (row = 0 ; row < rowsize ; row++)
    {
        for (col = 0 ; col < colsize ; col++)
        {
            if (max < a[row][col])
            {
                max = a[row][col];
            }
        }
    } 

    cout << max << endl << endl;
}