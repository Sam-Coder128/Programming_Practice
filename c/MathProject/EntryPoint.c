///////////////////////////////////////////////////////////////
//
// Function Name : main
// Output        : results of arithmetic operations
// Description   : Clarifies usage of multiple helper functions via header inclusion.
// Author        : Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

#include "Marvellous.h"

///////////////////////////////////////////////////////////////
//
// Application : Demonstrates how entrypoint calls various arithmetic helpers.
//
///////////////////////////////////////////////////////////////

int main() {
    int Ans = 0;

    Ans = Addition(11, 10);
    printf("Addition is: %d\n", Ans);

    Ans = Substraction(11, 10);
    printf("Substraction is: %d\n", Ans);

    Ans = Multiplication(11, 10);
    printf("Multiplication is: %d\n", Ans);

    Ans = Division(11, 10);
    printf("Division is: %d\n", Ans);

    Ans = Modulus(11, 10);
    printf("Modulus is: %d\n", Ans);

    return 0;
}
