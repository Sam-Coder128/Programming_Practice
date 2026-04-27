public class Method {
    static int add(int a, int b) {
        return a + b;
    }

    static double add(double a, double b) { // method overloading
        return a + b;
    }

    public static void main(String[] args) {
        System.out.println("Sum int: " + add(5, 3));
        System.out.println("Sum double: " + add(2.5, 3.5));
    }
}
