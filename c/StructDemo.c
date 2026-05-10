///////////////////////////////////////////////////////////////
//
// Function Name : main
// Output        : int value, float value
// Description   : Demonstrates struct member assignment and printing.
// Author        : Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////
//
// Application : Shows how to define, initialize, and access struct members.
//
///////////////////////////////////////////////////////////////

struct Student {
    int id;
    float marks;
};

int main() {
    struct Student s;

    s.id = 1;
    s.marks = 85.5;

    printf("ID: %d\n", s.id);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
