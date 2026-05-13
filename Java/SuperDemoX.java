///////////////////////////////////////////////////////////////
//
// Class : Base, Derived
// Members : int i
// Methods : Constructor, Fun()
// Description : Base class with parameterized constructor.
// Author      : Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////
class Base {
    public int i;

    public Base(int no) {
        this.i = no;
        System.out.println("Inside Base constructor.");
    }

    public void Fun() {
        System.out.println("Inside Fun Base.");
    }
}
class Derived extends Base {
    public int i;

    public Derived() {
        super(11);   // Explicit call to Base(int) constructor
        this.i = 21;
        System.out.println("Inside Derived constructor.");
    }

    public void Gun() {
        System.out.println("Inside Gun Derived.");
        System.out.println("Value of i: " + i);
        System.out.println("Value of i from base: " + super.i);
    }
}

///////////////////////////////////////////////////////////////
//
// Application : Demonstrates constructor chaining with super keyword.
//
///////////////////////////////////////////////////////////////
class SuperDemo {
    public static void main(String[] args) {
        Derived Dobj = new Derived();
        Dobj.Gun();
    }
}
