class Base{
    public int i;
    public int j;
    public Base(){
        this.i=11;
        this.j=21;
        System.out.println("Inside Base constructor.");
    }
    public void Fun(){
        System.out.println("Inside Fun Base.");
    }
}
class Derived extends Base{
    public int x;
    public Derived(){
        this.x=51;
        System.out.println("Inside Derived constructor.");
    }
    public void Gun(){
        System.out.println("Inside Gun Derived.");
        System.out.println("Value of i: "+super.i);
        System.out.println("Value of j: "+super.j);
        System.out.println("Value of x: "+this.x);
    }
}

class ThisSuper{
public static void main(String[] args) {
        Derived Dobj = new Derived();
        Dobj.Gun();
    }
}
