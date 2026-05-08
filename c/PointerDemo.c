#include <stdio.h>
int main() {
    int x = 10;
    int *ptr = &x; // pointer stores address of x

    printf("Value of x = %d\n", x); // 10
    printf("Address of x = %p\n", &x); //100
    printf("Pointer ptr = %p\n", ptr); //100
    printf("Dereference *ptr = %d\n", *ptr); // access value via pointer - 10
    return 0;
}
