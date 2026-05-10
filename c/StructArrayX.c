///////////////////////////////////////////////////////////////
//
// Function Name : main
// Output        : float value, int array values
// Description   : Explains struct member assignment and printing.
// Author        : Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////
//
// Application to access and print struct members.
//
///////////////////////////////////////////////////////////////

struct Hello {
    float f;        // 4 bytes
    int Arr[3];     // 12 bytes
} hobj;             // total 16 bytes

int main() {
    hobj.f = 10.0f;

    hobj.Arr[0] = 11;
    hobj.Arr[1] = 21;
    hobj.Arr[2] = 51;
    
    printf("%f\n", hobj.f);
    printf("%d\t%d\t%d\n", hobj.Arr[0], hobj.Arr[1], hobj.Arr[2]);

    return 0;
}
