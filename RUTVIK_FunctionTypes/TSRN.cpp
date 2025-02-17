#include <iostream>
using namespace std;

void tsrn(int a, int b)
{
    cout << endl << "A + B = " << a + b << endl << endl;
}

int main()
{
    cout << endl << "Take Something Return Nothing." << endl;

    int a, b;

    cout << endl << "A = ";
    cin >> a;

    cout << "B = ";
    cin >> b;

    tsrn(a, b);
}