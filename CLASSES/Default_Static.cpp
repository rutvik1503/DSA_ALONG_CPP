#include <iostream>
using namespace std;

class name
{
    public:
    static int age;
};

int name::age = 50;

int main()
{
    cout << name::age;
}