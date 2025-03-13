#include <iostream>
using namespace std;

int input(int &a, int &b)
{
    cout << endl << "Enter the value of A : ";
    cin >> a;

    cout << "Enter the value of B : ";
    cin >> b;
}

int sum(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

int mod(int a, int b)
{
    return a % b;
}

void option()
{
    cout << endl << "1 : Addition " << endl;
    cout << "2 : Substraction" << endl;
    cout << "3 : Multiplication" << endl;
    cout << "4 : Division" << endl;
    cout << "5 : Modulor" << endl;
    cout << "6 : Exit" << endl;
}

int main()
{
    int n, a, b;
    do
    {
        option();

        cout << endl << "Enter your choice from 1 to 6 : ";
        cin >> n;

        switch (n)
        {
            case 1:
                input(a, b);            

                cout << endl << "A + B = " << sum(a, b) << endl << endl;
                break;

            case 2:
                input(a, b);

                cout << endl << "A - B = " << sub(a, b) << endl << endl;
                break;

            case 3:
                input(a, b);
                
                cout << endl << "A * B = " << mul(a, b) << endl << endl;
                break;

            case 4:
                input(a, b);
                
                cout << endl << "A / B = " << divide(a, b) << endl << endl;
                break;

            case 5:
                input(a, b);
                
                cout << endl << "A % B = " << mod(a, b) << endl << endl;
                break;

            case 6:
                cout << endl << "Thank you..." << endl << endl;
                break;

            default :
                cout << endl << "Enter right choice from 1 to 6" << endl << endl;
        }
    } while (n != 6);
}