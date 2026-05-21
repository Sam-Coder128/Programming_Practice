////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name(s) : MainThreadPriority
// Input         : None
// Output        : Prints main thread message, thread name, and priority
// Methods       : main(), currentThread(), getName(), getPriority()
// Description   : Demonstrates accessing main thread details and its priority in Java.
// Author        : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class MainThreadPriority{
    public static void main(String[] args) {
        
        System.out.println("Inside Main.");

        Thread dobj = Thread.currentThread();

        String name = dobj.getName();

        System.out.println("Name of current thread: " + name);

        System.out.println("Priority of thread is: " + dobj.getPriority());
    }
}
