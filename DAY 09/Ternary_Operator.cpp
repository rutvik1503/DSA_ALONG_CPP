// Write a c++ program for the ternary operator.

#include <iostream>
using namespace std;

int main()
{
    int a , b;

    cout << endl << "Enter the value of A : ";
    cin >> a ;

    cout << "Enter the value of B : ";
    cin >> b ;

    (a > b) ? cout << endl << "A is greater then B" << endl << endl : cout << endl << "B is greater then A" << endl << endl;

    return 0;
}