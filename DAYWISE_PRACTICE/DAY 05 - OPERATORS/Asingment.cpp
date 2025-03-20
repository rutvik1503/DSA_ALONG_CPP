// Write a c++ program for assingment operators.

#include <iostream>
using namespace std;

int main()
{
    int a;

    cout << endl
         << "Enter the value of A : ";
    cin >> a;

    a += 5;
    cout << endl
         << "A += 5 : " << a;

    a -= 5;
    cout << endl
         << "A -= 5 : " << a;

    a *= 5;
    cout << endl
         << "A *= 5 : " << a;

    a /= 5;
    cout << endl
         << "A /= 5 : " << a;

    a %= 5;
    cout << endl
         << "A %= 5 : " << a << endl
         << endl;
}
