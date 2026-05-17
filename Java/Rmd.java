////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name(s) : Base, Derived, Rmd
// Input         : None
// Output        : Compilation error due to invalid downcasting
// Methods       : Fun(), Gun(), Sun(), Run()
// Description   : Demonstrates upcasting and invalid downcasting in Java.
// Author        : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Base{
    public int i, j;

    public void Fun(){ System.out.println("Inside Base Fun."); }

    public void Gun(){ System.out.println("Inside Base Gun."); }

    public void Sun(){ System.out.println("Inside Base Sun."); }
}

class Derived extends Base{
    public int x, y;

    public void Gun(){ System.out.println("Inside Derived Gun."); }

    public void Sun(){ System.out.println("Inside Derived Sun."); }

    public void Run(){ System.out.println("Inside Derived Run."); }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Demonstrates upcasting and invalid downcasting.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Rmd{
    public static void main(String[] args) {
        // Base bobj = new Base(); NoCasting

        Base bobj = new Derived();          // UpCasting 

        // Derived dobj = new Derived();    // NoCasting 

        Derived dobj = new Base();          // DownCasting   Error 
    }
}
