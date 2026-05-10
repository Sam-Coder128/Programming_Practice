///////////////////////////////////////////////////////////////
//
// Function Name : main
// Output        : sizes of struct objects
// Description   : Clarifies difference between default alignment and pragma pack.
// Author        : Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

#include <stdio.h>

// default alignment
struct DefaultStruct {
    char a;   // 1 byte + 3 bytes padding
    int b;    // 4 bytes
};            // total 8 bytes

// force 1-byte packing
#pragma pack(1)
struct PackedStruct {
    char a;   // 1 byte
    int b;    // 4 bytes
};            // total 5 bytes
#pragma pack() // reset to default

///////////////////////////////////////////////////////////////
//
// Application : Demonstrates how packing alters struct size.
//
///////////////////////////////////////////////////////////////

int main() {
    printf("Size of DefaultStruct: %lu\n", sizeof(struct DefaultStruct));
    printf("Size of PackedStruct (pragma pack 1): %lu\n", sizeof(struct PackedStruct));
    return 0;
}
