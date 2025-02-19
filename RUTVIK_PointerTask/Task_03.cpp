#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    int *p1 = &a;
    int **p2 = &p1;
    int ***p3 = &p2;
    int ****p4 = &p3;
    int *****p5 = &p4;

    cout << endl << "&a = " << p1 << " | a = " << *p1;
    cout << endl << "&p1 = " << p2 << " | a = " << **p2;
    cout << endl << "&p2 = " << p3 << " | a = " << **p2;
    cout << endl << "&p3 = " << p4 << " | a = " << **p2;
    cout << endl << "&p4 = " << p5 << " | a = " << **p2 << endl << endl;
}