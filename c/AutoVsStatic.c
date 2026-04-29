#include <stdio.h>

void fun() {
    auto int x = 0;   // Explicitly declared automatic variable
    static int y = 0; // Static variable

    x++;
    y++;

    printf("x = %d, y = %d\n", x, y);
}

int main() {
    fun();
    fun();
    fun();
    return 0;
}

//Output
/* 
x = 1, y = 1
x = 1, y = 2
x = 1, y = 3
*/
