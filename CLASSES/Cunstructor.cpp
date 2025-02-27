#include <iostream>
using namespace std;

class student
{
public:
    int GRID;
    string name;
    int age;

    student(int GRID, string name, int age)
    {
        this->GRID = GRID;
        this->name = name;
        this->age = age;

        cout << "GRID : " << this->GRID << endl
             << "NAME : " << this->name << endl
             << "AGE : " << this->age << endl
             << endl;
    }
};

int main()
{
    cout << endl;

    student s1(1, "Rutvik", 21),s2(2, "Vinit", 21), s3(3, "Aum", 21);
}