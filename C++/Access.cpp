#include<iostream>
using namespace std;

class Demo{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:
        Demo(){
            i=0;
            j=0;
            k=0;
        }
        void display(){
            cout << "Value of i: " << i << endl; // Allowed
            cout << "Value of j: " << j << endl; // Allowed
            cout << "Value of k: " << k << endl; // Allowed
        }
};
int main(){
    Demo dobj;
    dobj.display();
    cout << "Value of i: " << dobj.i << endl; // Allowed
    cout << "Value of j: " << dobj.j << endl; // Not Allowed
    cout << "Value of k: " << dobj.k << endl; // Not Allowed
    return 0;
}
