#include <iostream>
using namespace std;

class std_01
{
    public :
    int id;
    string name;
};

class girl : public std_01
{
    public :
    string contact;
};

class boy : public std_01
{
    public :
    string contact;
};

int main()
{
    girl S01;

    S01.id = 1;
    S01.name = "Vinita";
    S01.contact = "9988776655";

    boy S02;

    S02.id = 2;
    S02.name = "Rutvik";
    S02.contact = "9988776655";

    cout << endl << "Girls data in the standard 01" << endl;

    cout << "GRID : " << S01.id << endl << "Name : " << S01.name << endl << "Contact :" << S01.contact << endl << endl;

    cout << "Boys data in the standard 01" << endl;

    cout << "GRID : " << S02.id << endl << "Name : " << S02.name << endl << "Contact :" << S02.contact << endl << endl;

}