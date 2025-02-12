//Write a Program to perform the addition operation of two 2D arrays & store it in another array. Keep in mind that both array sizes must be the same

#include <iostream>
using namespace std;

int main()
{
    cout << endl << "Write a Program to perform the addition operation of two 2D arrays & store it in another array. Keep in mind that both array sizes must be the same." << endl << endl;

    int rowsize, colsize;

    cout << "Enter the size of row : ";
    cin >> rowsize;

    cout << "Enter the size of row : ";
    cin >> colsize;

    cout << endl;

    int a[rowsize][colsize], b[rowsize][colsize], c[rowsize][colsize];

    cout << "Please enter values in array A..." << endl << endl;

    // Loop for row
    for (int row = 0 ; row < rowsize ; row++)
    {
        // Loop for column
        for (int col = 0 ; col < colsize ; col++)
        {
            cout << "Enter the value at a[" << row << "][" << col << "] : ";
            cin >> a[row][col];
        }
        // cout << endl;
    }

    cout << endl << "Please enter values in array B..." << endl << endl;

    // Loop for row
    for (int row = 0 ; row < rowsize ; row++)
    {
        // Loop for column
        for (int col = 0 ; col < colsize ; col++)
        {
            cout << "Enter the value at b[" << row << "][" << col << "] : ";
            cin >> b[row][col];
        }
        // cout << endl;
    }

    cout << "Here is entered values array A..." << endl << endl;

    for (int row = 0 ; row < rowsize ; row++)
    {
        // Loop for column
        for (int col = 0 ; col < colsize ; col++)
        {
            cout << a[row][col] << " ";
        }
        cout << endl;
    }

    cout << endl << "Here is entered values array B..." << endl << endl;

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

    // Store the sum of array A & B value in the array C.

    cout << "Here is sum of array A & B value in the array C." << endl << endl;

    for (int row = 0 ; row < rowsize ; row++)
    {
        for (int col = 0 ; col < colsize ; col++ )
        {
            c[row][col] = a[row][col] + b[row][col];
            cout << c[row][col] << " ";
        }
        cout << endl;
    }

    cout << endl;
}