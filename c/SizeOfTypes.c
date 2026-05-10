///////////////////////////////////////////////////////////////
//
// Function Name : main
// Output        : sizes of short int, long int, unsigned int, signed int
// Description   : Shows usage of sizeof operator on integer types.
// Author        : Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////
//
// Application : Explains memory size differences across integer variations.
//
///////////////////////////////////////////////////////////////

int main() {
    printf("Size of short int: %lu bytes\n", sizeof(short int));
    printf("Size of long int: %lu bytes\n", sizeof(long int));
    printf("Size of unsigned int: %lu bytes\n", sizeof(unsigned int));
    printf("Size of signed int: %lu bytes\n", sizeof(signed int));

    return 0;
}
