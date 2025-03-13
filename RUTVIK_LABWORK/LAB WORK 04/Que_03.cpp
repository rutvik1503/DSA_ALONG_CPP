#include <iostream>
using namespace std;

int main()
{
    // 5
    // 4 4
    // 3 3 3 
    // 2 2 2 2
    // 1 1 1 1 1

    cout << endl;

    for (int row = 5 ; row >= 1 ; row--)
    {
        for (int col = row ; col <= 5 ; col++)
        {
            cout << row << " ";
        }
        cout << endl;
    }
    
    cout << endl;
}