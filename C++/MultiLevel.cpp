#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////
//
// Program Name : MultiLevelInheritance
// Classes :     Base, Derived, DerivedX
// Input :       None (object creation triggers constructors)
// Output :      Constructor/Destructor messages, sizes of objects,
//               member values, and method calls.
// Description:  Demonstrates multi-level inheritance in C++
//               and shows order of constructor/destructor calls,
//               object sizes, and method accessibility.
// Author:       Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

class Base {
public:
    int i, j;

    Base() {
        cout << "Inside Base Constructor." << endl;
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

class Derived : public Base {
public:
    int x;
    Derived() {
        cout << "Inside Derived Constructor." << endl;
        x = 0;
    }
    ~Derived() {
        cout << "Inside Derived Destructor." << endl;
    }
    void Gun() {
        cout << "Inside Gun of Derived." << endl;
    }
};

class DerivedX : public Derived {
public:
    int y;

    DerivedX() {
        cout << "Inside DerivedX Constructor." << endl;
        y = 0;
    }
    ~DerivedX() {
        cout << "Inside DerivedX Destructor." << endl;
    }
    void Sun() {
        cout << "Inside Sun of DerivedX." << endl;
    }
};

///////////////////////////////////////////////////////////////
//
// Application demonstrating multi-level inheritance
//
///////////////////////////////////////////////////////////////

int main(){ 
    cout << "Inside main." << endl;
    
    DerivedX dobj;  // Constructors run in order: Base → Derived → DerivedX

    cout << "Size of Base class object is : " << sizeof(Base) << endl;
    cout << "Size of Derived class object is : " << sizeof(Derived) << endl;
    cout << "Size of DerivedX class object is : " << sizeof(DerivedX) << endl;
    
    cout << dobj.i << endl;     // 0
    cout << dobj.j << endl;     // 0
    cout << dobj.x << endl;     // 0
    cout << dobj.y << endl;     // 0

    dobj.Fun();  // Base method
    dobj.Gun();  // Derived method
    dobj.Sun();  // DerivedX method  

    cout << "End of main." << endl;
    return 0;
}
