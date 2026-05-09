#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////
//
// Class Name : Demo
// Members :    int i, int j, static int k
// Description: Shows static member shared across all objects.
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
};

int Demo::k = 11; // definition of static member outside class

///////////////////////////////////////////////////////////////
//
// Application : Demonstrates static member access.
//
///////////////////////////////////////////////////////////////

int main() {
    Demo dobj;

    cout << Demo::k << endl; // 11
    cout << dobj.i << endl;  // 0
    cout << dobj.j << endl;  // 0

    return 0;
}
