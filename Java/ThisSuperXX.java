///////////////////////////////////////////////////////////////
//
// Classes : Base, Derived
// Members : Base → int i; Derived → int i
// Methods : Constructors, Fun(), Gun()
// Description: Clarifies variable shadowing and super keyword usage.
// Author:      Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

class Base {
    public int i;

    public Base() {
        this.i = 11;
        System.out.println("Inside Base constructor.");
    }

    public void Fun() {
        System.out.println("Inside Fun Base.");
    }
}

class Derived extends Base {
    public int i;

    public Derived() {
        this.i = 21;
        System.out.println("Inside Derived constructor.");
    }

    public void Gun() {
        System.out.println("Inside Gun Derived.");
        System.out.println("Value of i (Derived): " + i);        // child’s variable
        System.out.println("Value of i (Base): " + super.i);     // parent’s variable
    }
}

///////////////////////////////////////////////////////////////
//
// Application : Shows variable shadowing and parent access using super keyword.
//
///////////////////////////////////////////////////////////////

class ThisSuperXX {
    public static void main(String[] args) {
        Derived Dobj = new Derived();
        Dobj.Gun();
    }
}
