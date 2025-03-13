// Write a Program to print the below Inverted Left Half Pyramid pattern using nested for loop.

// 5 4 3 2 1
//   4 3 2 1
//     3 2 1
//       2 1
//         1

#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows
    
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < i * 2; j++) {
            cout << " ";
        }
        
        // Print decreasing numbers
        for (int j = n - i; j >= 1; j--) {
            cout << j;
            if (j > 1) cout << " ";
        }
        
        cout << endl;
    }
    
    return 0;
}

