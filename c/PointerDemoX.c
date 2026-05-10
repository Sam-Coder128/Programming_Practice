///////////////////////////////////////////////////////////////
//
// Function Name : main
// Output        : printed values
// Description   : Illustrates dereferencing of different datatype pointers.
// Author        : Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////
//
// Application : Clarifies pointer usage across char, int, float, double.
//
///////////////////////////////////////////////////////////////

int main() {
    char ch = 'A';
    char *cptr = &ch;

    int i = 11;
    int *iptr = &i;

    float f = 90.99f;
    float *fptr = &f;

    double d = 78.67890;
    double *dptr = &d;

    printf("%c\n", *cptr);
    printf("%d\n", *iptr);
    printf("%f\n", *fptr);
    printf("%lf\n", *dptr);

    return 0;
}
