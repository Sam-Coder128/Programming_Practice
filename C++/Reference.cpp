////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Reference Variable Demo
// Input        : Marks (int)
// Output       : Prints values of marks and reference before and after modification
// Methods      : cout
// Description  : Demonstrates usage of reference variables in C++.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Shows how reference variables alias existing variables.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() {
    int marks = 80;

    // ref is another name for marks
    int &reference = marks;

    cout << "Marks: " << marks << endl;
    cout << "Reference: " << reference << endl;

    reference = 95; // changing ref also changes marks

    cout << "\nAfter changing ref:" << endl;
    cout << "Marks: " << marks << endl;
    cout << "Reference: " << reference << endl;

    return 0;
}
