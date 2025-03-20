// Write a c++ program for switch case...

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << endl << "In this program value of N is represent week days count..." << endl << endl;

    cout << "Enter the value of N : ";
    cin >> n;

    switch (n)
    {
        case 1:
            cout << endl << "Sunday..." << endl << endl;
            break;

        case 2:
            cout << endl << "Monday..." << endl << endl;
            break;

        case 3:
            cout << endl << "Tuesday..." << endl << endl;   
            break;

        case 4:
            cout << endl << "Wednesday..." << endl << endl;     
            break;
        
        case 5:
            cout << endl << "Thursday..." << endl << endl;
            break;

        case 6:
            cout << endl << "Friday..." << endl << endl;
            break;

        case 7:
            cout << endl << "Saturday..." << endl << endl;
            break;
        
        default :
            cout << endl << "Enter the value from the 1 to 7..." << endl << endl;
    }
}