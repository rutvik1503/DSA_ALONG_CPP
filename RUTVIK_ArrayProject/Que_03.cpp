// Develop a Program to find the transpose matrix of a given 2D array.

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

    int b[rowsize][colsize];

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

    for (row = 0 ; row < rowsize ; row++)
    {
        for (col = 0 ; col < colsize ; col++)
        {
            b[col][row] = a[row][col];
        }
    } 

    cout << endl << "Transposed elements of the array A..." << endl << endl;

    for (row = 0 ; row < rowsize ; row++)
    {
        for (col = 0 ; col < colsize ; col++)
        {
            cout << b[row][col] << " ";
        }
        cout << endl;
    }

    cout << endl;
}