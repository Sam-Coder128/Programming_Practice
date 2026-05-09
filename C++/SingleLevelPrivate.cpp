#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////
//
// Class Name : Base
// Members :    int i, int j (private)
// Methods :    Constructor, Destructor, Fun()
// Description: Demonstrates a base class with private data, constructor, destructor, and method.
// Author:      Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

class Base {
private:
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
// Application demonstrating single-level inheritance with private members in base class
//
///////////////////////////////////////////////////////////////

int main() {
    Derived dobj;

    cout << "Size of Base class object is : " << sizeof(Base) << endl;
    cout << "Size of Derived class object is : " << sizeof(Derived) << endl;

    // cout << dobj.i << endl;   // Error: private members not accessible
    // cout << dobj.j << endl;   // Error: private members not accessible
    cout << dobj.x << endl;     // Accessible → prints 0

    return 0;
}
