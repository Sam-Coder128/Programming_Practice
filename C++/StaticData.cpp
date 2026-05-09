#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////
//
// Class Name : Demo
// Members :    int i, int j, static int k
// Description: Demonstrates static variable excluded from object size.
// Author:      Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

class Demo {
public:
    int i;          // instance variable
    int j;          // instance variable
    static int k;   // static variable (class-level)
};

int Demo::k = 0; // definition of static member outside class

///////////////////////////////////////////////////////////////
//
// Application : Shows sizeof() ignores static members.
//
///////////////////////////////////////////////////////////////

int main() {
    Demo dobj;
    cout << sizeof(dobj) << endl; // 8
    return 0;
}
