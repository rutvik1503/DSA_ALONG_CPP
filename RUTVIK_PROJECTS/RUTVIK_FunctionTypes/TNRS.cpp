#include <iostream>
using namespace std;

int TNRS()
{
    int a = 10;
    int b = 20;

    return a + b;
}

int main()
{
    cout << endl << "Take Nothing Return Something" << endl;

    cout << endl << "A + B = " << TNRS() << endl << endl;
}