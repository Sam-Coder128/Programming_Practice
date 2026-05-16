////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Upcasting Demo
// Input        : None
// Output       : Calls Base class methods, error on Derived-only method
// Methods      : Fun(), Gun(), Sun(), Run()
// Description  : Demonstrates upcasting and method accessibility in C++.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Base{
public:
    int i, j;

    void Fun(){ cout << "Inside Base Fun." << endl; }

    void Gun(){ cout << "Inside Base Gun." << endl; }

    void Sun(){ cout << "Inside Base Sun." << endl; }
};

class Derived: public Base{
public:
    int x, y;

    void Gun(){ cout << "Inside Derived Gun." << endl; }

    void Sun(){ cout << "Inside Derived Sun." << endl; }

    void Run(){ cout << "Inside Derived Run." << endl; }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Demonstrates upcasting and method call behavior.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(){
    Base *bp = NULL;
    
    bp = new Derived();               // UpCasting

    bp->Fun();                       // Base Fun
    bp->Gun();                       // Base Gun
    bp->Sun();                       // Base Sun
    bp->Run();                       // Error

    return 0;
}
