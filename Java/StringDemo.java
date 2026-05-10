///////////////////////////////////////////////////////////////
//
// Class Name : StringDemo
// Variables : String S1, String S2
// Description: Explains string object creation and length method usage.
// Author:      Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

class StringDemo {
    ///////////////////////////////////////////////////////////////
    //
    // Application : Highlights string printing and length evaluation.
    //
    ///////////////////////////////////////////////////////////////
    public static void main(String[] args) {
        
        String S1 = "Hello";                  // string literal
        String S2 = new String("Ganesh");     // new object

        System.out.println(S1);
        System.out.println(S1);

        System.out.println(S1.length());
        System.out.println(S2.length());
    }
}
