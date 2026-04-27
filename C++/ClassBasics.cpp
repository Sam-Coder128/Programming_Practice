#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;
public:
    void setData(int r, string n) {
        roll = r; name = n;
    }
    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student s1;
    s1.setData(1, "Sam");
    s1.display();
}
