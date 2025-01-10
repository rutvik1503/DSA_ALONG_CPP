// Write a program to create a table of the multiplication using c++

#include <iostream>
using namespace std;

int main()
{
    // Declare 3 variables for the create the multiplication table
    // variable a is for the which table we want to print
    // variable n is for the 1 to 10 number
    // variable m for store the value of multiplication
    int a=2, m, n;

    cout << endl;

    // Apply for loop to create a efect of the multiplication table
    for (n=1; n<=10; n++)
    {
        // Store the value of a * n in the m
        m=a*n;

        // Print the multiplication table
        cout << a << "*" << n << "=" << m << endl;
    }

    cout << endl;

    return 0;
}