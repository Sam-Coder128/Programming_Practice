///////////////////////////////////////////////////////////////
//
// Class Name : JaggedArray
// Members :    int Arr[][]
// Description: Explains jagged array structure with uneven row sizes.
// Author:      Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

class JaggedArray {
    ///////////////////////////////////////////////////////////////
    //
    // Application : Highlights row-wise initialization and length property usage.
    //
    ///////////////////////////////////////////////////////////////
    public static void main(String[] args) {
        int Arr[][] = new int[3][];

        Arr[0] = new int[4];
        Arr[1] = new int[7];
        Arr[2] = new int[5];

        System.out.println(Arr.length);

        System.out.println(Arr[0].length);
        System.out.println(Arr[1].length);
        System.out.println(Arr[2].length);
    }
}
