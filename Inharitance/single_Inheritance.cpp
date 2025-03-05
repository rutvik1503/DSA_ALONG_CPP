#include <iostream>
using namespace std;

class student
{
public:
    int id;
    int std;
};

class male : public student
{
public:
    string name;
};

int main()
{
    male std_01;

    std_01.name = "Vinit";
    std_01.std = 12;

    cout << endl
         << "Name = " << std_01.name << endl
         << "Standard = " << std_01.std << endl
         << endl;
}