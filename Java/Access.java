///////////////////////////////////////////////////////////////
//
// Class Name : Demo
// Members :    public int i, private int j, protected int k
// Methods :    Constructor, Display()
// Description: Explains access specifier ranges in Java.
// Author:      Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

class Demo {
    public int i;
    private int j;
    protected int k;

    public Demo() {
        i = 0;
        j = 0;
        k = 0;
    }

    public void Display() {
        System.out.println("Value of i: " + i); // Allowed
        System.out.println("Value of j: " + j); // Allowed
        System.out.println("Value of k: " + k); // Allowed
    }
}

///////////////////////////////////////////////////////////////
//
// Application : Shows which members are accessible in main and inheritance.
//
///////////////////////////////////////////////////////////////

public class Access {
    public static void main(String A[]) {
        Demo dobj = new Demo();
        dobj.Display();

        System.out.println("Value of i: " + dobj.i); // Allowed
        // System.out.println("Value of j: " + dobj.j); // Not Allowed (private)
        // System.out.println("Value of k: " + dobj.k); // Allowed only in inheritance, not here
    }
}
