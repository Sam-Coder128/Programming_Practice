///////////////////////////////////////////////////////////////
//
// Function Name : main
// Output        : int
// Description   : Shows pointer basics and sizeof operator usage.
// Author        : Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////
//
// Application : Explains variable, pointer, dereference, and sizeof results.
//
///////////////////////////////////////////////////////////////

int main() {
    int x = 10;
    int *ptr = &x; // pointer stores address of x

    printf("Value of x = %d\n", x);          // 10
    printf("Address of x = %p\n", &x);       // address of x
    printf("Pointer ptr = %p\n", ptr);       // same address
    printf("Dereference *ptr = %d\n", *ptr); // 10

    // sizeof operator checks
    printf("sizeof(x) = %zu\n", sizeof(x));       // size of int
    printf("sizeof(*ptr) = %zu\n", sizeof(*ptr)); // size of int (dereferenced value)
    printf("sizeof(ptr) = %zu\n", sizeof(ptr));   // size of pointer itself

    return 0;
}
