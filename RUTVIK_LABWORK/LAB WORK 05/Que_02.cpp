//Write a Program to print the below Left Half Pyramid pattern using nested for loop.

//         5
//       4 5
//     3 4 5
//   2 3 4 5
// 1 2 3 4 5

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
            cout << i << " ";
        }

        cout << endl;
    }

    cout << endl;
}