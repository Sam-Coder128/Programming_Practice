///////////////////////////////////////////////////////////////
//
// Classes : Base, Derived
// Members : Base → int i, j; Derived → int x
// Methods : Constructors, Fun(), Gun()
// Description: Explains inheritance and direct member access without super.
// Author:      Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

class Base {
    public int i;
    public int j;

    public Base() {
        this.i = 11;
        this.j = 21;
        System.out.println("Inside Base constructor.");
    }

    public void Fun() {
        System.out.println("Inside Fun Base.");
    }
}

class Derived extends Base {
    public int x;

    public Derived() {
        this.x = 51;
        System.out.println("Inside Derived constructor.");
    }

    public void Gun() {
        System.out.println("Inside Gun Derived.");
        System.out.println("Value of i: " + i);   // inherited directly
        System.out.println("Value of j: " + j);   // inherited directly
        System.out.println("Value of x: " + x);   // child member
    }
}

///////////////////////////////////////////////////////////////
//
// Application : Highlights inherited member access without super keyword.
//
///////////////////////////////////////////////////////////////

class ThisSuperX {
    public static void main(String[] args) {
        Derived Dobj = new Derived();
        Dobj.Gun();
    }
}
