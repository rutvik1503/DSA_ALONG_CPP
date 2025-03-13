#include <iostream>
using namespace std;

class student
{
public:
    int gr_id;
    string name;
    int age;
};

int main()
{
    student s_1;

    s_1.gr_id = 1;
    s_1.name = "Rutvik";
    s_1.age = 21;

    cout << endl
         << "GRID : " << s_1.gr_id << endl
         << "NAME : " << s_1.name << endl
         << "AGE : " << s_1.age << endl
         << endl;
}