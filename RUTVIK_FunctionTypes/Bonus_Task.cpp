#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    else{
        return n * factorial(n -1);
    }
}

int main()
{
    int n;

    cout << endl << "Enter the value of N : ";
    cin >> n;

    cout << endl << "Factorial of " << n << " = " << factorial(n) << endl << endl;
}