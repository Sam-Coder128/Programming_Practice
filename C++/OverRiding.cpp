///////////////////////////////////////////////////////////////
//
// Output        : sizes of Base and Derived, function calls
// Description   : Demonstrates method overriding in inheritance.
// Author        : Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

///////////////////////////////////////////////////////////////
//
// Class : Base
// Members : int i, int j
// Methods : Fun(), Gun(), Sun()
// Description : Shows base class with three methods.
//
///////////////////////////////////////////////////////////////
class Base {
public:
    int i, j;

    void Fun() { cout << "Inside Base Fun." << endl; }
    void Gun() { cout << "Inside Base Gun." << endl; }
    void Sun() { cout << "Inside Base Sun." << endl; }
}; // 8 Bytes (two ints)

///////////////////////////////////////////////////////////////
//
// Class : Derived
// Inherits : Base (public)
// Members : int x, int y
// Methods : Gun(), Sun(), Run()
// Description : Overrides Gun and Sun, adds Run.
//
///////////////////////////////////////////////////////////////
class Derived : public Base {
public:
    int x, y;

    void Gun() { cout << "Inside Derived Gun." << endl; }
    void Sun() { cout << "Inside Derived Sun." << endl; }
    void Run() { cout << "Inside Derived Run." << endl; }
}; // 16 Bytes (four ints)

///////////////////////////////////////////////////////////////
//
// Application : Clarifies static binding when Base pointer points to Derived.
//
///////////////////////////////////////////////////////////////
int main() {
    cout << sizeof(Base) << "\n";
    cout << sizeof(Derived) << "\n";

    Base *bp = new Derived(); //UpCasting

    bp->Fun();   // Base version
    bp->Gun();   // Base version (static binding, not virtual)
    bp->Sun();   // Base version

    delete bp;
    return 0;
}
