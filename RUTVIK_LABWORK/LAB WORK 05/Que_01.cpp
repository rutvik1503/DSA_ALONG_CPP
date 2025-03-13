// Write a Program to print the below Left Half Pyramid pattern using nested for loop.

//         1
//       2 1
//     3 2 1
//   4 3 2 1
// 5 4 3 2 1

#include <iostream>
using namespace std;

int main()
{
    cout << endl << "Write a Program to print the below Left Half Pyramid pattern using nested for loop." << endl << endl;

    int n = 5;

    //Loop for the rows
    for ( int row = 1 ; row <= n ; row++ )
    {
        //Loop for the blanck place.
        for ( int col = row ; col <= n - 1 ; col++)
        {
            cout << "  ";
        }

        //Loops for the numbers.
        for ( int i = row ; i >= 1 ; i-- )
        {
            cout << i << " ";
        }
        cout << endl;
    }

    cout << endl;
}