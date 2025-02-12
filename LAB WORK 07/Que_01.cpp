// Write a Program to find the average of a given 2D array.

#include <iostream>
using namespace std;

int main()
{
    cout << endl << "Write a Program to find the average of a given 2D array." << endl << endl;

    int rowsize, colsize;

    cout << "Enter the size of row : ";
    cin >> rowsize;

    cout << "Enter the size of row : ";
    cin >> colsize;

    cout << endl;

    int a[rowsize][colsize];

    // Loop for row
    for (int row = 0 ; row < rowsize ; row++)
    {
        // Loop for column
        for (int col = 0 ; col < colsize ; col++)
        {
            cout << "Enter the value at a[" << row << "][" << col << "] : ";
            cin >> a[row][col];
        }
        cout << endl;
    }
    
    cout << "Here is entered values of 2D array..." << endl << endl;

    for (int row = 0 ; row < rowsize ; row++)
    {
        // Loop for column
        for (int col = 0 ; col < colsize ; col++)
        {
            cout << a[row][col] << " ";
        }
        cout << endl;
    }

    cout << endl;
}