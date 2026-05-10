#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////
//
// Classes : Base, Derived
// Members : Base → int i, j; Derived → int x, y
// Description: Explains invalid downcasting from Base to Derived.
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
// Application : Highlights unsafe downcasting with Base object.
//
///////////////////////////////////////////////////////////////

int main() {
    Derived* dp = NULL;
    Base bobj;

    // dp = &bobj;   // ❌ Invalid downcasting: bobj is not Derived

    // Correct way: only downcast if object was created as Derived
    Base* bp = new Derived();         // Upcasting
    Derived* dptr = dynamic_cast<Derived*>(bp); // Safe downcast

    if(dptr != NULL) {
        cout << "Downcast successful." << endl;
    } else {
        cout << "Downcast failed." << endl;
    }

    delete bp;
    return 0;
}
