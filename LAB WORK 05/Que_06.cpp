#include <iostream>
using namespace std;

int main()
{
    int row, space, num, n = 5;

    cout << endl;

    for (row = 0 ; row < n ; row++)
    {
        for (space = 0 ; space < n - row - 1 ; space++)
        {
            cout << " ";
        }

        for (num = row ; num < row * 2 + 1 ; num++)
        {
            cout << "*";
        }
        
        for (space = 0 ; space < n - row - 2 ; space++)
        {
            cout << " ";
        }

        cout << endl;
    }
}