////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Input   : Student name (string), age (int)
// Output  : Prints constructor calls and student details
// Methods : Default constructor, Parameterized constructor, Copy constructor, show()
// Description : Demonstrates different types of constructors in C++.
// Author      : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    // 1. Default constructor
    Student() {
        name = "Unknown";
        age = 0;
        cout << "Default constructor called" << endl;
    }

    // 2. Parameterized constructor
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized constructor called" << endl;
    }

    // 3. Copy constructor
    Student(Student &ref) {
        name = ref.name;
        age = ref.age;
        cout << "Copy constructor called" << endl;
    }

    void show() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Demonstrates default, parameterized, and copy constructors.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() {
    Student s1;                // default constructor
    s1.show();

    Student s2("Aman", 20);    // parameterized constructor
    s2.show();

    Student s3(s2);            // copy constructor
    s3.show();

    return 0;
}
