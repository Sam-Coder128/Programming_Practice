#include <stdio.h>

int main() {
    signed int a = -10;      // signed can hold negatives
    unsigned int b = 10;     // unsigned only non-negative

    printf("Signed a = %d\n", a);
    printf("Unsigned b = %u\n", b);

    // Edge case demo
    unsigned int c = -1;     // assigning negative to unsigned
    printf("Unsigned c = %u\n", c); // wraps around to max value

    return 0;
}

// Output
/*
Signed a = -10
Unsigned b = 10
Unsigned c = 4294967295
*/
