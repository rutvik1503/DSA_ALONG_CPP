#include <iostream>
using namespace std;

int main(){
    
    int size;
    cout << endl << "Enter the size of Array : ";
    cin >> size;

    cout << endl;

    int a[size];

    cout << "Enter the values in the array A..." << endl << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "a [" << i << "] = ";
        cin >> a[i]; 
    }

    cout << endl << "Entred value of array A " << endl << endl;

    for (int i : a)
    {
        cout << i << endl;
    }
    
    cout << endl;
}