#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////
//
// Class Name : Demo
// Members :    int i, int j, static int k
// Methods :    fun(), gun()
// Description: Shows difference between static and non-static methods.
// Author:      Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

class Demo {
public:
    int i;          // instance variable
    int j;          // instance variable
    static int k;   // static variable (class-level)

    Demo() {
        i = 0;
        j = 0;
    }

    void fun() {
        cout << "Inside non static fun.\n";
        cout << "i: " << i << endl;
        cout << "j: " << j << endl;
        cout << "k: " << k << endl;
    }

    static void gun() {
        cout << "Inside static gun.\n";
        cout << "k: " << k << endl;
    }
};

int Demo::k = 11; // definition of static member outside class

///////////////////////////////////////////////////////////////
//
// Application : Demonstrates static vs non-static methods.
//
///////////////////////////////////////////////////////////////

int main() {
    cout << Demo::k << endl; // 11

    Demo::gun();             // static method call

    Demo dobj;
    cout << dobj.i << endl;  // 0
    cout << dobj.j << endl;  // 0

    dobj.fun();              // non-static method call
    return 0;
}
