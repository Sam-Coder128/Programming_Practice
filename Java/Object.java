///////////////////////////////////////////////////////////////
//
// Class Name : Student
// Members :    String name, int age
// Methods :    display()
// Description: Clarifies object creation and member access in Java.
// Author:      Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

class Student {
    String name;
    int age;

    void display() {
        System.out.println("Name: " + name + ", Age: " + age);
    }
}

///////////////////////////////////////////////////////////////
//
// Application : Shows object instantiation and method invocation.
//
///////////////////////////////////////////////////////////////

public class Object {
    public static void main(String[] args) {
        Student s1 = new Student();
        s1.name = "Samruddh";
        s1.age = 21;
        s1.display();
    }
}
