#include <stdio.h>

int main() {
    printf("Size of short int: %lu bytes\n", sizeof(short int));
    printf("Size of long int: %lu bytes\n", sizeof(long int));
    printf("Size of unsigned int: %lu bytes\n", sizeof(unsigned int));
    printf("Size of signed int: %lu bytes\n", sizeof(signed int));

    return 0;
}
