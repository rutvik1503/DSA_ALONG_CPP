//Write a Program to print the below Left Half Pyramid pattern using nested for loop.

//         5
//       4 4
//     3 3 3
//   2 2 2 2
// 1 1 1 1 1

#include <iostream>
using namespace std;

int main()
{
    cout << endl << "Write a Program to print the below Left Half Pyramid pattern using nested for loop." << endl << endl;

    int n = 1;

    //loop for the row
    for ( int row = 5 ; row >= n ; row-- )
    {
        //loop for the blanck space.
        for ( int col = row ; col >= n - 1 ; col-- )
        {
            cout << "  ";
        }

        //loop for the numbers.
        for ( int i = row ; i <= 5 ; i++ )
        {
            cout << row << " ";
        }

        cout << endl;
    }

    cout << endl;
}