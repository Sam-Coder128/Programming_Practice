///////////////////////////////////////////////////////////////
//
// Class Name : ArrayDemo
// Members :    int Arr[], int Brr[], int Crr[]
// Description: Clarifies different array declaration styles in Java.
// Author:      Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

class ArrayDemo {
    ///////////////////////////////////////////////////////////////
    //
    // Application : Highlights array initialization and length property usage.
    //
    ///////////////////////////////////////////////////////////////
    public static void main(String A[]) {

        int Arr[] = {10, 20, 30, 40};
        int []Brr = {10, 20, 30, 40};
        int Crr[] = new int[4];

        Crr[0] = 10;
        Crr[1] = 20;
        Crr[2] = 30;
        Crr[3] = 40;

        System.out.println(Arr.length);
        System.out.println(Brr.length);
        System.out.println(Crr.length);
    }
}
