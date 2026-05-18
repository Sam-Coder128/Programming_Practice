////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Abstract Class Demo
// Input        : Circle radius, Rectangle length & breadth, Square side
// Output       : Prints area and perimeter of shapes
// Methods      : area(), perimeter(), message()
// Description  : Demonstrates abstract class with pure virtual functions in C++.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual functions
    virtual void area() = 0;
    virtual void perimeter() = 0;

    // Normal function
    void message() {
        cout << "This is a shape." << endl;
    }
};

// Child class 1
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    void area() {
        cout << "Circle Area: " << 3.14 * radius * radius << endl;
    }

    void perimeter() {
        cout << "Circle Perimeter: " << 2 * 3.14 * radius << endl;
    }
};

// Child class 2
class Rectangle : public Shape {
private:
    double length;
    double breadth;

public:
    Rectangle(double l, double b) {
        length = l;
        breadth = b;
    }

    void area() {
        cout << "Rectangle Area: " << length * breadth << endl;
    }

    void perimeter() {
        cout << "Rectangle Perimeter: " << 2 * (length + breadth) << endl;
    }
};

// Child class 3
class Square : public Shape {
private:
    double side;

public:
    Square(double s) {
        side = s;
    }

    void area() {
        cout << "Square Area: " << side * side << endl;
    }

    void perimeter() {
        cout << "Square Perimeter: " << 4 * side << endl;
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Demonstrates abstract class and implementation of pure virtual functions.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() {
    Circle c(5);
    Rectangle r(10, 4);
    Square s(6);

    c.message();
    c.area();
    c.perimeter();

    cout << endl;

    r.message();
    r.area();
    r.perimeter();

    cout << endl;

    s.message();
    s.area();
    s.perimeter();

    return 0;
}
