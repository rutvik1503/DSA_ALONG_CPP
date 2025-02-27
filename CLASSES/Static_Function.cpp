#include <iostream>
using namespace std;

class student
{
public:
    static int GRID;
    static string name;
    static int age;

    static void set(int a, string b, int c)
    {
        GRID = a;
        name = b;
        age = c;
    }

    static void get()
    {
        cout << "GRID : " << student::GRID << endl
             << "NAME : " << student::name << endl
             << "AGE : " << student::age << endl
             << endl;
    }
};

int student::GRID;
string student::name;
int student::age;

int main()
{
    student s1, s2, s3, s4, s5, s6;

    cout << endl;

    s1.set(1, "Rutvik", 21);
    s1.get();

    s2.set(2, "Vinit", 21);
    s2.get();

    s3.set(3, "Kartavya", 19);
    s3.get();

    s4.set(4, "Krishna", 19);
    s4.get();

    s5.set(5, "Aum", 21);
    s2.get();

    s6.set(6, "Prince", 18);
    s6.get();
}