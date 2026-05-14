////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program : RBI Static Variable Demo
// Input   : Bank name (string)
// Output  : Prints bank name and RBI repo rate
// Methods : Constructor, showBankName(), showRepoRate()
// Description : Demonstrates static variable and static method usage in C++.
// Author      : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class RBI {
public:
    string bankName;          // normal variable: object-specific
    static double repoRate;   // static variable: shared by all objects

    RBI(string bankName) {        // Parameterised constructor 
        this->bankName = bankName;
    }

    // Normal object method
    void showBankName() {
        cout << "Bank Name: " << bankName << endl;
    }

    // Static method
    static void showRepoRate() {
        cout << "RBI Repo Rate: " << repoRate << "%" << endl;
    }
};

// defining static variable outside class
double RBI::repoRate = 6.5;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Demonstrates static variable and static method access.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() {
    // Normal object
    RBI sbi("State Bank of India");

    // Access normal method using object
    sbi.showBankName();

    // Access static method using class name
    RBI::showRepoRate();

    // Static can also be accessed using object, but not recommended
    sbi.showRepoRate();

    return 0;
}
