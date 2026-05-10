///////////////////////////////////////////////////////////////
//
// Class Name : StringCompareX
// Variables : String S1, String S2
// Description: Explains content comparison using equals() method in Strings.
// Author:      Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

class StringCompareX {
    ///////////////////////////////////////////////////////////////
    //
    // Application : Shows equals() usage for string content equality.
    //
    ///////////////////////////////////////////////////////////////
    public static void main(String[] args) {

        String S1 = "Ganesh";                  // string literal
        String S2 = new String("Ganesh");      // new object

        if (S1.equals(S2))  
            System.out.println("Strings are equal.");
        else 
            System.out.println("Strings are unequal.");
    }
}
