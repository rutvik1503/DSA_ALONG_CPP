#include <iostream>
using namespace std;

class student
{
public:
    int GRID;
    string name;
    int age;
};

int main()
{
    student s[3] = {{1, "Rutvik", 21},{2, "Vinit", 21},{3, "Aum", 21},};

    cout << endl;

    //Printing the data members.
    for (int i = 0 ; i < 3 ; i++)
    {
        cout << "GRID : " << s[i].GRID << endl
         << "NAME : " << s[i].name << endl
         << "AGE : " << s[i].age << endl
         << endl;
    }
}