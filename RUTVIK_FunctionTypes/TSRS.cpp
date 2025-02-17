#include <iostream>
using namespace std;

int TSRS(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b;

    cout << endl << "Take Something Return Something" << endl << endl;

    cout << "Enter the value of A : ";
    cin >> a;

    cout << "Enter the value of B : ";
    cin >> b;

    cout << endl << "A + B = " << TSRS(a, b) << endl << endl;
}