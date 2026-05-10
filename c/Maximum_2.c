///////////////////////////////////////////////////////////////
//
// File Name : MaxOfTwo.c
// Functions : main()
// Description: Explains conditional logic to find maximum of two integers.
// Author:      Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////
//
// Application : Shows user input handling and maximum evaluation.
//
///////////////////////////////////////////////////////////////

int main() {
    int No1 = 0, No2 = 0;

    printf("Enter first number:\n");
    scanf("%d", &No1);

    printf("Enter second number:\n");
    scanf("%d", &No2);

    if (No1 > No2)
        printf("%d is maximum.\n", No1);
    else
        printf("%d is maximum.\n", No2);

    return 0;
}
