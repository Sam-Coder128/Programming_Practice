////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program : Base and Derived Size Demo
// Input   : None
// Output  : Prints size of Base and Derived classes
// Methods : sizeof(), cout
// Description : Demonstrates memory layout and virtual functions in inheritance.
// Author      : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Base{
public:
    int i, j;

    void Fun(){ cout << "Inside Base Fun." << endl; }

    virtual void Gun(){ cout << "Inside Base Gun." << endl; }

    virtual void Sun(){ cout << "Inside Base Sun." << endl; }
}; // 8 Byte

class Derived: public Base{
public:
    int x, y;

    void Gun(){ cout << "Inside Derived Gun." << endl; }

    void Sun(){ cout << "Inside Derived Sun." << endl; }

    virtual void Run(){ cout << "Inside Derived Run." << endl; }
}; // 16 Byte

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Prints sizes of Base, Virtual and Derived classes.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(){

    cout << sizeof(Base) << "\n";
    cout << sizeof(Derived) << "\n";

    return 0;
}
