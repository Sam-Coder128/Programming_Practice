#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////
//
// Class Name : Demo
// Members :    int i (public), int j (private), int k (protected)
// Description: Demonstrates access specifiers in C++.
// Author:      Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

class Demo {
    public:
        int i;          // Public member
    private:
        int j;          // Private member
    protected:
        int k;          // Protected member

    public:
        // Constructor
        Demo() {
            i = 0;
            j = 0;
            k = 0;
        }

        // Display method to show values of all members
        void display() {
            cout << "Value of i: " << i << endl;
            cout << "Value of j: " << j << endl;
            cout << "Value of k: " << k << endl;
        }
};

///////////////////////////////////////////////////////////////
//
// Application demonstrating access specifiers
//
///////////////////////////////////////////////////////////////

int main() {
    Demo dobj;

    // Input section
    cout << "Enter value for i: ";
    cin >> dobj.i;

    // Output section
    cout << "Displaying values through class method:" << endl;
    dobj.display(); // Allowed: method has access to all members

    cout << "Accessing public member directly: " << dobj.i << endl;

    // cout << dobj.j; // ❌ Not Allowed (private)
    // cout << dobj.k; // ❌ Not Allowed (protected)

    return 0;
}
