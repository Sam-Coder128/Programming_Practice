#include<iostream>
using namespace std;

class Demo{
    public:
        int i;          // auto
        int j;          // auto
        static int k;

        Demo(){
            i=0;
            j=0;
        }

        void fun(){
            cout << "Inside non static fun.\n";
            cout << "i: " << i << endl;
            cout << "j: " << j << endl;
            cout << "k: " << k << endl;
        }

        static void gun(){
            cout << "Inside static gun.\n";
            cout << "k: " << k << endl;
        }

};

int Demo :: k = 11;

int main()
{
    cout << Demo::k << endl; //11

    Demo::gun();

    Demo dobj;
    

    cout << dobj.i << endl;  //0
    cout << dobj.j << endl; //0

    dobj.fun();
    return 0;
}
