// Write a Program to find the sum of diagonal elements from a given 2D array.

#include <iostream>
using namespace std;

int main()
{
    cout << endl << "Write a Program to find the sum of diagonal elements from a given 2D array" << endl << endl;

    int row, col, rowsize, colsize;

    cout << "Enter the size of row : ";
    cin >> rowsize;

    cout << "Enter the size of col : ";
    cin >> colsize;

    int a[rowsize][colsize];

    cout << endl << "Enter the elements in the array..." << endl << endl;

    for (row = 0 ; row < rowsize ; row++)
    {
        for (col = 0 ; col < colsize ; col++)
        {
            cout << "Enter the value at a[" << row << "][" << col << "] : ";
            cin >> a[row][col];
        }
    }

    cout << endl << "Here is entered values array A..." << endl << endl;

    for (row = 0 ; row < rowsize ; row++)
    {
        // Loop for column
        for (col = 0 ; col < colsize ; col++)
        {
            cout << a[row][col] << " "; 
        }
        cout << endl;
    }

    cout << endl << "The sum of diagonal elements of an Array = ";

    int sum = 0;

    for (row = 0 ; row < rowsize ; row++)
    {
        sum += a[row][row];
    }

    cout << sum << endl << endl;

    return 0;
}