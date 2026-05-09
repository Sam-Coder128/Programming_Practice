#include <iostream>
using namespace std;

///////////////////////////////////////////////////////////////
//
// Class Name : Demo
// Methods :    Constructor, Destructor
// Description: Demonstrates lifecycle of objects in C++.
// Author:      Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

class Demo {
public:
    // Constructor
    Demo() {
        cout << "Constructor called" << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor called" << endl;
    }
};

///////////////////////////////////////////////////////////////
//
// Application demonstrating constructor and destructor calls
//
///////////////////////////////////////////////////////////////

int main() {
    cout << "Creating object..." << endl;
    Demo d;   // Constructor runs here

    cout << "Object will go out of scope at end of main()" << endl;
    // Destructor runs automatically when 'd' goes out of scope

    return 0;
}
