///////////////////////////////////////////////////////////////
//
// Function Name : main
// Output        : int value, char value, float value
// Description   : Illustrates struct member access using pointer and arrow operator.
// Author        : Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

#include <stdio.h>

// Declaration
#pragma pack(1)
struct Demo {
    int i;      // 4 bytes
    char ch;    // 1 byte
    float f;    // 4 bytes
};              // total 9 bytes with #pragma pack(1)

///////////////////////////////////////////////////////////////
//
// Application shows struct accesses members via -> operator.(indirect access)
//
///////////////////////////////////////////////////////////////

int main() {
    struct Demo dobj;
    struct Demo *ptr = NULL;

    ptr = &dobj;

    ptr->i = 11;
    ptr->ch = 'A';
    ptr->f = 10.0f;

    printf("%d\n", ptr->i);
    printf("%c\n", ptr->ch);
    printf("%f\n", ptr->f);

    return 0;
}
