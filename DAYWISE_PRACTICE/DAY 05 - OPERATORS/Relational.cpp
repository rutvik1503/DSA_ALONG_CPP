// Write a c++ program for relational operator.

#include <iostream> 
using namespace std;

int main()
{
    int a, b;

    cout << endl << "Enter the value of A : ";
    cin >> a;

    cout << endl << "Enter the value of B : ";
    cin >> b;

    cout << endl << "NOTE : IF CONDITION WAS TRUE THEN ANSWER WAS 1 IF FALSE THEN ANSWE WAS 0..." << endl << endl;

    cout << "A < B : " << (a < b) << endl << endl; 
    cout << "A > B : " << (a > b) << endl << endl;
    cout << "A <= B : " << (a <= b) << endl << endl;
    cout << "A >= B : " << (a >= b) << endl << endl;
    cout << "A == B : " << (a == b) << endl << endl;
    cout << "A != B : " << (a != b) << endl << endl;
}