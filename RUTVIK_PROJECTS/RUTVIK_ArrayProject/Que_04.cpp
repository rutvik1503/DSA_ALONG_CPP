// Develop a Program to print and find the sum of all elements of a given row & column from a 2D array.

#include <iostream>
using namespace std;

int main()
{
    int row, rowsize, col, colsize, rownum, sum = 0;

    cout << endl << "Enter the size of row : ";
    cin >> rowsize;

    cout << "Enter the size of column : ";
    cin >> colsize;

    int a[rowsize][colsize];

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

    cout << endl << "Enter the row number to do sum : ";
    cin >> rownum;

    cout << endl;

    cout << "Values in the row " << rownum << " : ";

    for (row = rownum - 1 ; row < rownum ; row++)
    {
        for (col = 0 ; col < colsize ; col++)
        {
            cout << a[row][col] << " ";
            sum += a[row][col];
        }
    }

    cout << endl << endl << "Sum of row " << rownum << " values = " << sum << endl << endl;
}