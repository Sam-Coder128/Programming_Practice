///////////////////////////////////////////////////////////////
//
// File Name : IntegerTypesDemo.c
// Functions : main()
// Description: Clarifies usage of short, long, signed, and unsigned integers.
// Author:      Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////
//
// Application : Shows integer type declarations and formatted printing.
//
///////////////////////////////////////////////////////////////

int main() {
    short int a = -10;
    long int b = 100000;
    unsigned int c = 50;
    signed int d = -20;

    printf("Short int: %d\n", a);
    printf("Long int: %ld\n", b);
    printf("Unsigned int: %u\n", c);
    printf("Signed int: %d\n", d);

    return 0;
}
