///////////////////////////////////////////////////////////////
//
// Function Name : main
// Input         : int
// Output        : int
// Description   : Illustrates number reversal and palindrome detection.
// Author        : Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////
//
// Application : Clarifies logic for comparing original and reversed number.
//
///////////////////////////////////////////////////////////////

int main() {
    int num, original, reverse = 0, remainder;

    // Input
    scanf("%d", &num);
    original = num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    // Check palindrome
    if (original == reverse)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
