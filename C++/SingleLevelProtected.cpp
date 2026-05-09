#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////
//
// Class Name : Base
// Members :    int i, int j (protected)
// Methods :    Constructor, Destructor, Fun()
// Description: Base class with protected data and simple method.
// Author:      Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

class Base {
protected:
    int i, j;
public:
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
};

///////////////////////////////////////////////////////////////
//
// Application : Demonstrates single-level inheritance with protected members.
//
///////////////////////////////////////////////////////////////

int main() {
    Derived dobj;

    cout << "Size of Base class object is : " << sizeof(Base) << endl;
    cout << "Size of Derived class object is : " << sizeof(Derived) << endl;

    // cout << dobj.i << endl;   // Error: protected members not accessible directly
    // cout << dobj.j << endl;   // Error: protected members not accessible directly
    cout << dobj.x << endl;     // Accessible → prints 0

    return 0;
}
