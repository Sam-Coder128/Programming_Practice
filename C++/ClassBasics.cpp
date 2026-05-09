#include <iostream>
using namespace std;

///////////////////////////////////////////////////////////////
//
// Class Name : Student
// Members :    int roll, string name
// Methods :    setData(int, string), display()
// Description: Demonstrates basics of class and object in C++.
// Author:      Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

class Student {
    int roll;          // Roll number
    string name;       // Student name
public:
    // Method to set data
    void setData(int r, string n) {
        roll = r;
        name = n;
    }

    // Method to display student details
    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

///////////////////////////////////////////////////////////////
//
// Application demonstrating class and object usage
//
///////////////////////////////////////////////////////////////

int main() {
    Student s1;

    // Input section
    int rno;
    string nm;
    cout << "Enter roll number: ";
    cin >> rno;
    cout << "Enter name: ";
    cin >> nm;

    // Setting data
    s1.setData(rno, nm);

    // Output section
    cout << "Student details:" << endl;
    s1.display();

    return 0;
}
