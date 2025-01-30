// Write a Program to print 1 to N using a while loop.

#include <iostream>
using namespace std;

int main()
{
    int i = 1, n;

    cout << endl << "Enter any digit : " ;
    cin >> n;
    cout << endl;

    while (i <= n)
    {   
        cout << i << endl ;
        i++;
    }
    
    return 0;
}