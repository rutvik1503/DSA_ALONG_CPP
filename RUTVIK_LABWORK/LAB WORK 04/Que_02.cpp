#include <iostream>
using namespace std;

int main()
{
    // 5
    // 4 5
    // 3 4 5
    // 2 3 4 5
    // 1 2 3 4 5

    cout << endl;

    for (int row = 5 ; row >= 1 ; row--)
    {
        for (int col = row ; col <= 5 ; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    
    cout << endl;
}