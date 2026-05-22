////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name(s) : Demo, MultiThreadingJoin
// Input         : None
// Output        : Prints main thread message, run method messages from two child threads, and end of main thread
// Methods       : run(), start(), join()
// Description   : Demonstrates multithreading with join() ensuring main thread waits for child threads to finish in Java.
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
// Application : Shows execution of main thread and two child threads, with join() ensuring sequential completion.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class MultiThreadingJoin{
    public static void main(String[] args) throws Exception{  
        
        System.out.println("Main thread is running...");

        Demo dobj1 = new Demo();
        Demo dobj2 = new Demo();

        dobj1.setName("First");
        dobj2.setName("Second");

        dobj1.start();
        dobj2.start();

        dobj1.join();
        dobj2.join();

        System.out.println("End of main thread.");
    }
}
