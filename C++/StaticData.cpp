#include<iostream>
using namespace std;

class Demo {
    public:
        int i;          // instance variable
        int j;          // instance variable
        static int k;   // static variable (class-level)
};

int Demo::k = 0; // definition of static member outside class

int main() {
    Demo dobj;
    cout << sizeof(dobj) << endl; // 8
    return 0;
}


// Output is 8 becoz size of object only access local variables not static.
