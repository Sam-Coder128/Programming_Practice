#include <iostream>
using namespace std;

///////////////////////////////////////////////////////////////
//
// Program Name : Factorial
// Input :        int (user-entered number)
// Output :       int (factorial of the entered number)
// Description:   Calculates factorial of a given number using
//                iterative for loop.
// Author:        Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////
//
// Application demonstrating factorial calculation
//
///////////////////////////////////////////////////////////////

int main() {
    int n = 0, fact = 1;

    cout << "Enter a number: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        fact *= i;
    }

    cout << "Factorial = " << fact << endl;

    return 0;
}
