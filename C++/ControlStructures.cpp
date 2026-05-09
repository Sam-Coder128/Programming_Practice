#include <iostream>
using namespace std;

///////////////////////////////////////////////////////////////
//
// Program Name : ControlStructures
// Input :        int (user-entered number)
// Output :       int
// Description:   Demonstrates basic control structures in C++
//                using if-else, switch, and for loop.
// Author:        Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

int main() {
    int num = 0;

    cout << "Enter a number: ";
    cin >> num;

    // if-else demonstration
    if (num > 0)
        cout << "Positive" << endl;
    else
        cout << "Non-positive" << endl;

    // switch-case demonstration
    switch(num) {
        case 10: 
            cout << "Ten" << endl; 
            break;
        default: 
            cout << "Other" << endl;
    }

    // for loop demonstration
    cout << "Counting from 1 to 5:" << endl;
    for (int i = 1; i <= 5; i++)
        cout << "Count: " << i << endl;

    return 0;
}
