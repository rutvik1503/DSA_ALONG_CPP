// Write a Program to print leap years between two given numbers using a while loop.

#include <iostream>
using namespace std;

int main()
{
    int start, end;

    cout << endl << "Enter starting year = ";
    cin >> start;

    cout << endl << "Enter ending year = ";
    cin >> end;

    cout << endl << "Here is the leap year list between " << start << " year & " << endl << " year..." << endl << endl;

    while (start <= end)
    {
        if (start % 4 == 0)
        {
            cout << start << endl;
        }

        start++;
    }
    cout << endl;

    return 0;
}