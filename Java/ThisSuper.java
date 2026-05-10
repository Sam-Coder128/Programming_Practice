///////////////////////////////////////////////////////////////
//
// Classes : Base, Derived
// Members : Base → int i, j; Derived → int x
// Methods : Constructors, Fun(), Gun()
// Description: Clarifies usage of this and super keywords in inheritance.
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
        System.out.println("Value of i: " + super.i);   // accessing parent members
        System.out.println("Value of j: " + super.j);   // accessing parent members
        System.out.println("Value of x: " + this.x);    // accessing current class member
    }
}

///////////////////////////////////////////////////////////////
//
// Application : Highlights member access using this and super keywords.
//
///////////////////////////////////////////////////////////////

class ThisSuper {
    public static void main(String[] args) {
        Derived Dobj = new Derived();
        Dobj.Gun();
    }
}
