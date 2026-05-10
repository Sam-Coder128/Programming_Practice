///////////////////////////////////////////////////////////////
//
// Function Name : main
// Output        : string values
// Description   : Illustrates different ways of string creation in C.
// Author        : Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////
//
// Application : Clarifies how arrays and string literals differ in initialization.
//
///////////////////////////////////////////////////////////////

int main() {
    char Arr[6] = {'H', 'e', 'l', 'l', 'o', '\0'};   // fixed-size char array
    char Brr[]  = {'H', 'e', 'l', 'l', 'o', '\0'};   // array with inferred size
    char Crr[]  = "Hello";                           // string literal

    printf("%s\n", Arr);
    printf("%s\n", Brr);
    printf("%s\n", Crr);

    return 0;
}
