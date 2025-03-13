// Write a Program to print odd numbers from N to 1 using a while loop

#include <iostream>
using namespace std;

int main()
{
    int i = 1, n;

    cout << endl << "Enter any digit : " ;
    cin >> n;
    cout << endl;

    while (n >= i)
    {   
        if (n % 2 == 1)
        {
            cout << n << endl;
        }

        n--;
    }
    
    cout << endl;

    return 0;
}