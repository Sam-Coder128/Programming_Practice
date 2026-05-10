///////////////////////////////////////////////////////////////
//
// Function Name : fun, main
// Output        : static int values
// Description   : Illustrates persistence of static variables across calls.
// Author        : Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////
//
// Application : Clarifies how static retains value between function calls.
//
///////////////////////////////////////////////////////////////

void fun() {
    static int x = 0;
    x++;
    printf("x = %d\n", x);
}

int main() {
    fun();
    fun();
    fun();
    return 0;
}

// Output
/*
x = 1
x = 2
x = 3
*/
