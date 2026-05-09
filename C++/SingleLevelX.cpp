#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////
//
// Class Name : Base
// Members :    int i, int j
// Methods :    Constructor, Destructor, Fun()
// Description: Base class with simple data and method.
// Author:      Samruddh Shivkumar Birajdar
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

///////////////////////////////////////////////////////////////
//
// Application : Demonstrates single-level inheritance.
//
///////////////////////////////////////////////////////////////

int main(){ 
    cout << "Inside main." << endl;
    
    Derived dobj;
    cout << "Size of Base class object is : " << sizeof(Base) << endl;
    cout << "Size of Derived class object is : " << sizeof(Derived) << endl;
    
    cout << dobj.i << endl;     // 0
    cout << dobj.j << endl;     // 0
    cout << dobj.x << endl;     // 0

    dobj.Fun();
    dobj.Gun();

    cout << "End of main." << endl;
    return 0;
}
