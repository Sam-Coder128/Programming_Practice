////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name(s) : MainThread
// Input         : None
// Output        : Prints main thread message and current thread name
// Methods       : main(), currentThread(), getName()
// Description   : Demonstrates accessing the main thread and retrieving its name in Java.
// Author        : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class MainThread{
    public static void main(String[] args) {
        
        System.out.println("Inside Main.");

        Thread dobj = Thread.currentThread();

        String name = dobj.getName();

        System.out.println("Name of current thread: " + name);
    }
}
