///////////////////////////////////////////////////////////////
//
// Class Name : StringCompare
// Variables : String S1, String S2
// Description: Explains difference between == and equals() in string comparison.
// Author:      Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

class StringCompare {
    ///////////////////////////////////////////////////////////////
    //
    // Application : Highlights reference vs content comparison in Strings.
    //
    ///////////////////////////////////////////////////////////////
    public static void main(String[] args) {

        String S1 = "Ganesh";                  // string literal
        String S2 = new String("Ganesh");      // new object

        if (S1 == S2)  
            System.out.println("Strings are equal.");
        else 
            System.out.println("Strings are unequal.");
    }
}
