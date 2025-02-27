#include <iostream>
using namespace std;

int a = 30;

int main()
{
    int a = 10;

    cout << endl
         << "Gloabal Variable : " << ::a << endl
         << "A : " << a << endl
         << endl;
}