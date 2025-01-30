// Write a program to swap the value

#include <iostream>
using namespace std;

int main()
{
    int f, s, t;

    cout << endl << "Enter the first value : ";
    cin >> f;

    cout << endl << "Enter the second value : ";
    cin >> s;

    t = f;

    f = s;
    cout << endl << "First Value = " << f << endl << endl;

    s = t;
    cout << "Second valur = " << s << endl << endl;
}