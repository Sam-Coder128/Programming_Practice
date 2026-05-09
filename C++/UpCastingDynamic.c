#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////
//
// Classes : Base, Derived
// Members : Base → int i, j; Derived → int x, y
// Description: Demonstrates dynamic upcasting using new operator.
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
// Application : Shows dynamic upcasting with Base pointer.
//
///////////////////////////////////////////////////////////////

int main() {
    Base *bp = NULL;
    bp = new Derived();   // UpCasting in dynamic allocation

    return 0;
}
