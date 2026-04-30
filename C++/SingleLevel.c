#include<iostream>
using namespace std;

class Base{
    public:
        int i, j;

        Base(){
            cout << "Inside Base Constructor" << endl;
            i=0;
            j=0;
        }
        ~Base(){
            cout << "Inside Base Destructor." << endl;
        }
        void Fun(){
            cout << "Inside Base Fun." << endl;
        }
};
class Derived: public Base{

};
int main(){
    Base bobj;
    Derived dobj;

    return 0;
}
