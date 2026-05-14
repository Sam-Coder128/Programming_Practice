#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////
//
// Class Name : Base
// Members :    int i, int j
// Methods :    Constructor, Destructor, Fun()
// Description: Demonstrates a simple base class with
//              constructor, destructor, and method.
// Author:      Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

class Base {
public:
    int i, j;

    Base() {
        cout << "Inside Base Constructor" << endl;
        i = 0;
        j = 0;
    }
    ~Base() {
        cout << "Inside Base Destructor." << endl;
    }
    void Fun() {
        cout << "Inside Base Fun." << endl;
    }
};

class Derived : public Base { };

///////////////////////////////////////////////////////////////
//
// Application demonstrating single-level inheritance
//
///////////////////////////////////////////////////////////////

int main() {
    Base bobj;     // Base constructor & destructor run
    Derived dobj;  // Derived constructor & destructor run (with Base)

    return 0;
}
