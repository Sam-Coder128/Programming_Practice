///////////////////////////////////////////////////////////////
//
// Function Name : main
// Output        : sizes of struct objects
// Description   : Shows effect of member order on struct size.
// Author        : Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

#include <stdio.h>

struct A {
    char a;   // 1 byte + 3 bytes padding
    int b;    // 4 bytes
};            // total 8 bytes

struct B {
    int b;    // 4 bytes
    char a;   // 1 byte + 3 bytes padding at end
};            // total 8 bytes

///////////////////////////////////////////////////////////////
//
// Application : Illustrates how alignment and padding differ with ordering.
//
///////////////////////////////////////////////////////////////

int main() {
    printf("Size of struct A: %lu\n", sizeof(struct A));
    printf("Size of struct B: %lu\n", sizeof(struct B));
    return 0;
}
