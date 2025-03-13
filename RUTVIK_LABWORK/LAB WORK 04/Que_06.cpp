#include <iostream>
using namespace std;

int main()
{
    // 1 0 3 0 5
    // 1 0 3 0
    // 1 0 3
    // 1 0
    // 1

    cout << endl;

    for (int row = 5 ; row >= 1 ; row--)
    {
        for (int col = 1 ; col <= row ; col++)
        {
            if ( col % 2 == 1)
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