///////////////////////////////////////////////////////////////
//
// Class Name : Method
// Methods :    add(int,int), add(double,double), add(float,float)
// Description: Explains method overloading with multiple numeric datatypes.
// Author:      Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

public class Method {
    static int add(int a, int b) {
        return a + b;
    }

    static double add(double a, double b) { // method overloading
        return a + b;
    }

    static float add(float a, float b) { // method overloading
        return a + b;
    }

    ///////////////////////////////////////////////////////////////
    //
    // Application : Shows overloaded method calls with int, double, and float inputs.
    //
    ///////////////////////////////////////////////////////////////
    public static void main(String[] args) {
        System.out.println("Sum int: " + add(5, 3));
        System.out.println("Sum double: " + add(2.5, 3.5));
        System.out.println("Sum float: " + add(4.5f, 5.5f));
    }
}
