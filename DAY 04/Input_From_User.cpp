// Write a program to get input from the user

#include <iostream>
using namespace std;

int main()
{
    // Declare the variable in the integer data type
    int a, b;
    int sum, sub, mul, div, mod;

    cout << endl;

    // Teke input from the user
    cout << "Enter the value of A : " ;
    cin >> a;
    cout << endl;

    // Printing value of a
    cout << "Value of A = " << a << endl;

    cout << endl;

    // Teke input from the user
    cout << "Enter the value of B : ";
    cin >> b;
    cout << endl;

    // Printing value of b
    cout << "Vlue of B = " << b << endl;

    cout << endl;

    cout << "Here is some Arithmatic operation of C++" << endl << endl;

    // Adition of both values
    sum = a + b ;
    cout << "A + B = " << sum << endl;

    // Substraction of both values
    sub = a - b ;
    cout << "A - B = " << sub << endl;

    // Multiplication of both values
    mul = a * b ;
    cout << "A * B = " << mul << endl;

    // Division of both values
    div = a / b ;
    cout << "A / B = " << div << endl;

    // Modulor of both values
    mod = a % b ;
    cout << "A % B = " << mod << endl;

    cout << endl;

    return 0;
}