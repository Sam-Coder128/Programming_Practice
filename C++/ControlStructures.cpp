#include <iostream>
using namespace std;

int main() {
    int num = 10;

    if (num > 0)
        cout << "Positive" << endl;
    else
        cout << "Non-positive" << endl;

    switch(num) {
        case 10: cout << "Ten" << endl; break;
        default: cout << "Other" << endl;
    }

    for (int i = 1; i <= 5; i++)
        cout << "Count: " << i << endl;

    return 0;
}
