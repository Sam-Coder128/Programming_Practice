#include<iostream>
using namespace std;

class Base{
    public:
        int i, j;

        Base(){
            cout << "Inside Base Constructor." << endl;
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
public:
    int x;
    Derived(){
        cout << "Inside Derived Constructor." << endl;
        x=0;
    }
    ~Derived(){
        cout << "Inside Derived Destructor." << endl;
    }
    void Gun(){
        cout << "Inside Gun of Derived." << endl;
    }
};

class DerivedX : public Derived{
public:
    int y;

    DerivedX(){
        cout << "Inside DerivedX Constructor." << endl;
        y=0;
    }
    ~DerivedX(){
        cout << "Inside DerivedX Destructor." << endl;
    }
    void Sun(){
        cout << "Inside Sun of DerivedX." << endl;
    }

};
int main(){ 
    cout << "Inside main." << endl;
    
    DerivedX dobj;
    cout << "Size of Base class object is : " << sizeof(Base) << endl;
    cout << "Size of Derived class object is : " << sizeof(Derived) << endl;
    cout << "Size of DerivedX class object is : " << sizeof(DerivedX) << endl;
    
    cout << dobj.i << endl;     //0
    cout << dobj.j << endl;     //0
    cout << dobj.x << endl;     //0
    cout << dobj.y << endl;     //0

    dobj.Fun();
    dobj.Gun();
    dobj.Sun();  

    cout << "End of main." << endl;
    return 0;
}
