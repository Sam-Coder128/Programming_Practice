////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name(s) : Demo, Hello, FinalData
// Input         : Values for i and j
// Output        : Compilation error due to reassignment of final variable
// Methods       : Constructor, Fun(), Gun()
// Description   : Demonstrates immutability of final data members in Java.
// Author        : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Demo{
    public int i;
    public final int j;

    public Demo(int a, int b){
        this.i=a;
        this.j=b;
    }
}

class Hello extends Demo{
    public Hello(int a, int b){
        super(a,b);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Shows restriction on modifying final data members.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class FinalData{
    public static void main(String[] args) {
        
        Demo dobj = new Demo(10, 20);

        dobj.i = 11;            // Allowed
        dobj.j = 21;            // Not Allowed
        dobj.i++;               // Allowed
        dobj.j++;               // Not Allowed
    }
}
