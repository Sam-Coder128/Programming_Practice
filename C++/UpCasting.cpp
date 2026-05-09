#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////
//
// Classes : Base, Derived
// Members : Base → int i, j; Derived → int x, y
// Description: Demonstrates upcasting from Derived to Base pointer.
// Author:      Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

class Base {
public:
    int i, j;
};

class Derived : public Base {
public:
    int x, y;
};

///////////////////////////////////////////////////////////////
//
// Application : Shows upcasting with Base pointer to Derived object.
//
///////////////////////////////////////////////////////////////

int main() {
    Base *bp = NULL;
    Derived dobj;
    bp = &dobj;   // UpCasting

    return 0;
}
