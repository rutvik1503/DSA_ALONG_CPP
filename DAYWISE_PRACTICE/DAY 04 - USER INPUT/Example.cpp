// Write a c++ program to take input from the user.

#include <iostream>
using namespace std;

int main()
{
    int id;
    string fname, lname;

    cout << endl
         << "Enter your GRID : ";
    cin >> id;

    cout << "Enter your first name : ";
    cin >> fname;

    cout << "Enter your last name : ";
    cin >> lname;

    cout << endl
         << "STUDENT DETAIL" << endl
         << endl
         << "GRID : " << id << endl
         << "NAME : " << fname << " " << lname << endl
         << endl;
}