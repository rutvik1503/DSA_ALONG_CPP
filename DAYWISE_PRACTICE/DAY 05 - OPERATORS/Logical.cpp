// Write a c++ program for the logical operators

#include <iostream>
using namespace std;

int main()
{
    int a;

    cout << endl << "Enter the value of A : ";
    cin >> a;

    cout << endl << "NOTE : IF CONDITION WAS TRUE THEN ANSWER WAS 1 IF FALSE THEN ANSWE WAS 0..." << endl << endl;

    cout << "A < 10 && A > 0 : " << (a < 10 && a > 0) << endl << endl; 
    cout << "A < 10 || A > 0 : " << (a < 10 || a > 0) << endl << endl;
    cout << "!(A < 10 && A > 0) : " << (!(a < 10 && a > 0)) << endl << endl;
}