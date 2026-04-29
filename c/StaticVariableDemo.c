#include <stdio.h>

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
