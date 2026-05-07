#include<iostream>
using namespace std;

class Base{
public:
    int i, j;
};

class Derived: public Base{
public:
    int x, y;
};

int main(){
    Base *bp = NULL;
    
    bp = new Derived();               // UpCasting in dynamic

    return 0;
}
