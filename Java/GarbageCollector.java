///////////////////////////////////////////////////////////////
//
// Classes : Base, Derived
// Members : Base → int i, j; Derived → int x
// Methods : Constructors, finalize(), Fun(), Gun()
// Description: Explains garbage collection and finalize in Java.
// Author:      Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

class Base {
    public int i;
    public int j;

    public Base() {
        this.i = 0;
        this.j = 0;
        System.out.println("Inside Base constructor.");
    }

    @Override
    protected void finalize() {
        System.out.println("Inside Base finalize.");
    }

    public void Fun() {
        System.out.println("Inside Fun Base.");
    }
}

class Derived extends Base {
    public int x;

    public Derived() {
        this.x = 0;
        System.out.println("Inside Derived constructor.");
    }

    @Override
    protected void finalize() {
        System.out.println("Inside Derived finalize.");
    }

    public void Gun() {
        System.out.println("Inside Gun Derived.");
    }
}

///////////////////////////////////////////////////////////////
//
// Application : Shows garbage collection triggering finalize methods.
//
///////////////////////////////////////////////////////////////

public class SingleGC {
    public static void main(String[] args) {
        System.out.println("Inside main.");

        Derived Dobj = new Derived();
        System.out.println(Dobj.i);
        System.out.println(Dobj.j);
        System.out.println(Dobj.x);
        Dobj.Fun();
        Dobj.Gun();

        Dobj = null;          // object eligible for GC
        System.gc();          // request garbage collection

        System.out.println("End of main.");
    }
}
