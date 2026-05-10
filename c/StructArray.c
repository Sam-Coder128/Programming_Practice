///////////////////////////////////////////////////////////////
//
// Function Name : main
// Output        : size of struct object
// Description   : Demonstrates struct with float and int array members.
// Author        : Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////
//
// Application : Shows array of structure
//
///////////////////////////////////////////////////////////////

struct Hello {
    float f;        // 4 bytes
    int Arr[3];     // 12 bytes
} hobj;             // total 16 bytes

int main() {
    printf("Size of object is : %lu\n", sizeof(hobj));
    return 0;
}
