///////////////////////////////////////////////////////////////
//
// Function Name : StrLenX, main
// Output        : char values, int length
// Description   : Shows pointer traversal and manual string length calculation.
// Author        : Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////
//
// Application : Explains how pointer increments traverse string and count length.
//
///////////////////////////////////////////////////////////////

int StrLenX(char *ptr) { // Call By Address
    int i = 0;
    while (*ptr != '\0') {
        i++;
        ptr++;
    }
    return i;
}

int main() {
    char str[] = "Ganesh";
    char* ptr = NULL;

    ptr = str;                  // points to first character

    while (*ptr != '\0') {
        printf("%c\n", *ptr);   // print each character
        ptr++;                  // move pointer forward
    }

    int result = StrLenX(str);  // call function with base address
    printf("\n\n\nLength is: %d\n", result);

    return 0;    
}
