///////////////////////////////////////////////////////////////
//
// Output        : Demonstrates overriding with virtual functions
// Description   : Shows static vs dynamic binding in inheritance.
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
// Description : Base class with virtual methods.
//
///////////////////////////////////////////////////////////////
class Base {
public:
    int i, j;

    void Fun() { cout << "Inside Base Fun." << endl; }             // 1000
    virtual void Gun() { cout << "Inside Base Gun." << endl; }     // 2000
    virtual void Sun() { cout << "Inside Base Sun." << endl; }     // 3000
};

///////////////////////////////////////////////////////////////
//
// Class : Derived
// Inherits : Base (public)
// Members : int x, int y
// Methods : Fun(), Sun(), Run()
// Description : Overrides Sun, hides Fun, adds Run.
//
///////////////////////////////////////////////////////////////
class Derived : public Base {
public:
    int x, y;

    void Fun() { cout << "Inside Derived Fun." << endl; }           // 4000
    void Sun() { cout << "Inside Derived Sun." << endl; }           // 5000
    virtual void Run() { cout << "Inside Derived Run." << endl; }   // 6000
};

///////////////////////////////////////////////////////////////
//
// Application : Clarifies upcasting and virtual dispatch.
//
///////////////////////////////////////////////////////////////
int main() {
    Base *bp = new Derived();  // UpCasting

    bp->Fun();   // Base Fun (non-virtual → static binding)
    bp->Gun();   // Base Gun (virtual but not overridden)
    bp->Sun();   // Derived Sun (virtual + overridden)
    // bp->Run(); // Error: not in Base interface

    delete bp;
    return 0;
}
