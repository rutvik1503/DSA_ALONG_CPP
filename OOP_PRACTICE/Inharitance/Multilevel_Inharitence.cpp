#include <iostream>
using namespace std;

class school
{
public:
    int id;
    string medium;
};

class section : public school
{
public:
    string fname;
    string lname;
    string section;
};

class standard : public section
{
public:
    int standard;
};

int main()
{
    standard student1;

    student1.id = 1;
    student1.fname = "Bhatti";
    student1.lname = "Rutvik";
    student1.medium = "English";
    student1.section = "Higher-Secondary";
    student1.standard = 12;

    cout << endl
         << "Here is GRID " << student1.id << " data..." << endl
         << endl;

    cout << "Stuent id : " << student1.id << endl
         << "Student Name : " << student1.lname << " " << student1.fname << endl
         << "Standard : " << student1.standard << endl
         << "Medium Of Study : " << student1.medium << endl
         << "Section : " << student1.section << endl
         << endl;
}