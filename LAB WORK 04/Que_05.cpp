#include <iostream>
using namespace std;

int main()
{
    // 1 1 1 1 1
    // 2 2 2 2
    // 3 3 3 
    // 4 4
    // 5

    cout << endl;

    for (int row = 1 ; row <= 5 ; row++)
    {
        for (int col = row ; col <= 5 ; col++)
        {
            cout << row << " ";
        }
        cout << endl;
    }
    
    cout << endl;
}