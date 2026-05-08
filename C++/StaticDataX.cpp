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

};

int Demo :: k = 11;

int main()
{
    Demo dobj;
    cout << Demo::k << endl; //11

    cout << dobj.i << endl;  //0
    cout << dobj.j << endl; //0
    return 0;
}
