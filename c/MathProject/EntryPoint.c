///////////////////////////////////////////////////////////////
//
// Function Name : main
// Output        : addition result, subtraction result
// Description   : Explains usage of helper functions via header inclusion.
// Author        : Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

#include "Marvellous.h"

///////////////////////////////////////////////////////////////
//
// Application : Clarifies how entrypoint calls helper functions.
//
///////////////////////////////////////////////////////////////

int main() {
    int Ans = 0;

    Ans = Addition(11, 10);
    printf("Addition is: %d\n", Ans);

    Ans = Substraction(11, 10);
    printf("Substraction is: %d\n", Ans);

    return 0;
}
