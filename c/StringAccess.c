///////////////////////////////////////////////////////////////
//
// Function Name : main
// Output        : char values
// Description   : Shows traversal of character array using loop.
// Author        : Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////
//
// Application : Explains accessing each character in a string array.
//
///////////////////////////////////////////////////////////////

int main() {
    char Arr[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    int i = 0;

    for (i = 0; i < 6; i++)
        printf("%c\n", Arr[i]);

    return 0;
}
