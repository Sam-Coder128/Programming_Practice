///////////////////////////////////////////////////////////////
//
// Function Name : main
// Output        : char values
// Description   : Illustrates pointer traversal of a string.
// Author        : Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////
//
// Application : Clarifies how pointer increments move through characters.
//
///////////////////////////////////////////////////////////////

int main() {
    char str[] = "Ganesh";
    char* ptr = NULL;

    ptr = str;            // points to first character

    printf("%c\n", *ptr); // G
    ptr++;                // move to next character

    printf("%c\n", *ptr); // a
    ptr++;                

    printf("%c\n", *ptr); // n

    return 0;    
}
