#include <iostream>
using namespace std;

int main()
{
    // 1 2 3 4 5
    // 2 3 4 5
    // 3 4 5
    // 4 5
    // 5

    cout << endl;

    for (int row = 1 ; row <= 5 ; row++)
    {
        for (int col = row ; col <= 5 ; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    
    cout << endl;
}