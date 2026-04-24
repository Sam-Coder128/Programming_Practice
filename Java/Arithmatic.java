class Arithmatic{
    public int No1,No2;
    public Arithmatic(){
        this.No1=0;
        this.No2=0;
    }
    public Arithmatic(int Value1, int Value2){
        this.No1=Value1;
        this.No2=Value2;
    }
    public int Addition(){
        int Ans=this.No1+this.No2;
        return  Ans;
    }
    public int Substraction(){
        int Ans=this.No1-this.No2;
        return  Ans;
    }
}
class First{
    public static void main(String A[]) {
            System.out.println("Inside main");   

            Arithmatic  aobj = new Arithmatic(11,10);

            int Result = aobj.Addition();
            System.out.println("Addition is : " + Result);

            Result = aobj.Substraction();
            System.out.println("Subtraction is : " + Result);
        }
}
