#include <iostream>
using namespace std;

///////////////////////////////////////////////////////////////
//
// Class Name : Math
// Methods :    add(int, int), add(double, double)
// Input :       int a, int b OR double a, double b
// Output :      Sum of the two numbers (int or double)
// Description:  Demonstrates function overloading in C++
// Author:       Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

class Math {
public:
    int add(int a, int b) { return a + b; }
    double add(double a, double b) { return a + b; }
};

///////////////////////////////////////////////////////////////
//
// Application demonstrating function overloading
//
///////////////////////////////////////////////////////////////

int main() {
    Math m;

    cout << "Addition of integers (2, 3): " << m.add(2, 3) << endl;
    cout << "Addition of doubles (2.5, 3.5): " << m.add(2.5, 3.5) << endl;

    return 0;
}
