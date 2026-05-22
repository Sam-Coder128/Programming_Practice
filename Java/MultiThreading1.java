////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name(s) : Demo, MultiThreading1
// Input         : None
// Output        : Prints main thread message and run method messages from two child threads
// Methods       : run(), start()
// Description   : Demonstrates multithreading by starting multiple threads in Java.
// Author        : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Demo extends Thread{
    public void run(){ System.out.println("Inside Run Method."); }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Shows execution of main thread and two child threads running concurrently.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class MultiThreading1{
    public static void main(String[] args) {
        
        System.out.println("Main thread is running...");

        Demo dobj1 = new Demo();
        Demo dobj2 = new Demo();

        dobj1.start();
        dobj2.start();

        System.out.println("");
    }
}
