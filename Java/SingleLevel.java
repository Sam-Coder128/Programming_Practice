///////////////////////////////////////////////////////////////
//
// Classes : Base, Derived
// Members : Base → int i, j; Derived → int x
// Methods : Constructors, Fun(), Gun()
// Description: Clarifies single-level inheritance with constructor chaining.
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
        System.out.println("Inside Base Finalize.");
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
        System.out.println("Inside Derived Finalize.");
    }

    public void Gun() {
        System.out.println("Inside Gun Derived.");
    }
}

///////////////////////////////////////////////////////////////
//
// Application : Highlights member accessibility and method calls in inheritance.
//
///////////////////////////////////////////////////////////////

class SingleLevel {
    public static void main(String[] args) {
        System.out.println("Inside main.");

        Derived Dobj = new Derived();
        System.out.println(Dobj.i);
        System.out.println(Dobj.j);
        System.out.println(Dobj.x);
        Dobj.Fun();
        Dobj.Gun();

        System.out.println("End of main.");
    }
}
