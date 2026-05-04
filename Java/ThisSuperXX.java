class Base{
    public int i;

    public Base(){
        this.i=11;
        System.out.println("Inside Base constructor.");
    }
    public void Fun(){
        System.out.println("Inside Fun Base.");
    }
}
class Derived extends Base{
    public int i;
    public Derived(){
        this.i=21;
        System.out.println("Inside Derived constructor.");
    }
    public void Gun(){
        System.out.println("Inside Gun Derived.");
        System.out.println("Value of i: "+i);

        System.out.println("Value of i from base: "+super.i);        
    }
}

class ThisSuperXX{
public static void main(String[] args) {
        Derived Dobj = new Derived();
        Dobj.Gun();
    }
}
