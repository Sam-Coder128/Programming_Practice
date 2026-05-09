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
    Derived dobj;
    bp = &dobj;               // UpCasting

    return 0;
}
