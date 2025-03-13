#include <iostream>
using namespace std;

void task01()
{
    cout << endl << "Task 01" << endl;

    int a = 10;

    int *p = &a;

    cout << endl << "&A = " << p << " | A = " << *p << endl << endl;
}

void task02()
{
    cout << "Task 02" << endl;

    int size;

    cout << endl << "Enter the size of array A : ";
    cin >> size;

    int a[size];
    int *p[size];

    cout << endl << "Enter the elements in the array A" << endl << endl;

    for (int i = 0 ; i < size ; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
        p[i] = &a[i];
    }

    cout << endl << "Entered elements and the address of elements." << endl << endl;

    for (int i = 0 ; i < size ; i++)
    {
        cout << "&a[" << i << "] = " << p[i] << " | a[" << i << "] = " << *p[i] << endl;
    }

    cout << endl;
}

void task03()
{
    cout << "Task 03" << endl;

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

int main()
{
    task01();
    task02();
    task03();
}