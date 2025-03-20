// Write a c++ program to perform all arithmatic operators.

#include <iostream>
using namespace std;

int main()
{
     int a, b;

     cout << endl
          << "Enter the value of A : ";
     cin >> a;

     cout << endl
          << "Enter the value of B : ";
     cin >> b;

     cout << endl
          << "A + B = " << a + b << endl
          << "A - B  = " << a - b << endl
          << "A * B = " << a * b << endl
          << "A / B = " << a / b << endl
          << "A++ = " << ++a << endl
          << "B-- = " << --b << endl
          << endl;
}