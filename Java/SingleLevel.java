class Base{
    public int i;
    public int j;
    public Base(){
        this.i=0;
        this.j=0;
        System.out.println("Inside Base constructor.");
    }
    protected void finalise(){
        System.out.println("Inside Base Finalise.");
    }
    public void Fun(){
        System.out.println("Inside Fun Base.");
    }
}
class Derived extends Base{
    public int x;
    public Derived(){
        this.x=0;
        System.out.println("Inside Derived constructor.");
    }
    protected void finalise(){
        System.out.println("Inside Derived Finalise.");
    }
    public void Gun(){
        System.out.println("Inside Gun Derived.");
    }
}

class SingleLevel{
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
