//Write a Program to print the below Inverted Left Half Pyramid pattern using nested for loop.

// 1 0 1 0 1
//   0 1 0 1
//     1 0 1
//       0 1
//         1

#include <iostream>
using namespace std;

int main()
{
    cout << endl << "Write a Program to print the below Inverted Left Half Pyramid pattern using nested for loop." << endl << endl;

    int n = 5;

    // loop for the row
    for ( int row = 1 ; row <= n ; row++ )
    {
        // loop for the space.
        for ( int space = 1 ; space <= row ; space++ )
        {
            cout << "  ";
        }

        // loop for the numbers.
        for ( int col = row ; col <= n ; col++ )
        {
            if ( col % 2 == 1 )
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }

        cout << endl;
    }

    cout << endl;
}
