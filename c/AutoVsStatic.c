///////////////////////////////////////////////////////////////
//
// File Name : AutoStaticDemo.c
// Functions : fun(), main()
// Description: Clarifies auto vs static variable behavior in C.
// Author:      Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

#include <stdio.h>

void fun() {
    auto int x = 0;   // automatic variable (reinitialized each call)
    static int y = 0; // static variable (retains value across calls)

    x++;
    y++;

    printf("x = %d, y = %d\n", x, y);
}

///////////////////////////////////////////////////////////////
//
// Application : Shows persistence of static variable vs reset of auto variable.
//
///////////////////////////////////////////////////////////////

int main() {
    fun();
    fun();
    fun();
    return 0;
}
