// Write a program of c++ for arithmatic operation with switch case..

#include <iostream>
using namespace std;

int main()
{
    int a, b, opt;

    cout << endl << "Enter the value of A : ";
    cin >> a;

    cout << endl << "Enter the value of B : ";
    cin >> b;

    cout << endl << "Which kind of arithmatic operation do you want to do..." << endl << endl;

    cout << "1 - Adition..." << endl;
    cout << "2 - Substraction..." << endl;
    cout << "3 - Multiolication..." << endl;
    cout << "4 - Division..." << endl;
    cout << "5 - Modulor..." << endl;

    cout << endl << "Please select the option : ";
    cin >> opt;

    switch (opt)
    {
        case 1:
            cout << endl << "A + B = " << a+b << endl << endl;
            break;

        case 2:
            cout << endl << "A - B = " << a-b << endl << endl;
            break;

        case 3:
            cout << endl << "A * B = " << a*b << endl << endl;
            break;

        case 4:
            cout << endl << "A / B = " << a/b << endl << endl;
            break;

        case 5:
            cout << endl << "A % B = " << a%b << endl << endl;
            break;

        default :
            cout << endl << "Please select the valid option from 1 to 5..." << endl << endl;
    }
}