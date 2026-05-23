////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name(s) : Demo, MultiThreadingLoop
// Input         : None
// Output        : Prints main thread message and run method messages from two child threads
// Methods       : run(), start()
// Description   : Demonstrates multithreading with loop execution in Java.
// Author        : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Demo extends Thread{
    public void run(){ 
        int i = 0;
        for (i = 1; i <= 100; i++) 
            System.out.println("Inside Run Method of: " + Thread.currentThread().getName() + ": " + i);     
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Shows execution of main thread and two child threads running loops concurrently.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class MultiThreadingLoop{
    public static void main(String[] args) {
        
        System.out.println("Main thread is running...");

        Demo dobj1 = new Demo();
        Demo dobj2 = new Demo();

        dobj1.setName("First");
        dobj2.setName("Second");

        dobj1.start();
        dobj2.start();

        System.out.println("");
    }
}
