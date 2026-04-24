#include <stdio.h>

int main() {
    int num, original, reverse = 0, remainder;

    // Input
    scanf("%d", &num);
    original = num;

    // Reverse the number
    while(num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    // Check palindrome
    if(original == reverse)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
