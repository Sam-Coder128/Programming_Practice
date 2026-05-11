///////////////////////////////////////////////////////////////
//
// Function Name : Addition, Substraction, Multiplication, Division, Modulus
// Output        : int result
// Description   : Shows definitions of arithmetic helper functions.
// Author        : Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

// Definitions of functions
int Addition(int a, int b)       { return a + b; }
int Substraction(int a, int b)   { return a - b; }
int Multiplication(int a, int b) { return a * b; }
int Division(int a, int b)       { return (b != 0) ? (a / b) : 0; }
int Modulus(int a, int b)        { return (b != 0) ? (a % b) : 0; }
