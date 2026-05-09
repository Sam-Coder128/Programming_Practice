#include <iostream>
using namespace std;

///////////////////////////////////////////////////////////////
//
// Program Name : Maximum_3
// Input :        int a, int b, int c (user-entered numbers)
// Output :       int (largest among the three numbers)
// Description:   Determines the largest of three integers
//                using conditional statements.
// Author:        Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////
//
// Application demonstrating maximum of three numbers
//
///////////////////////////////////////////////////////////////

int main() {
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if(a >= b && a >= c)
        cout << "Largest: " << a << endl;
    else if(b >= c)
        cout << "Largest: " << b << endl;
    else
        cout << "Largest: " << c << endl;

    return 0;
}
