////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name(s) : Demo, MultiThreadingSleep
// Input         : None
// Output        : Prints main thread message, run method messages with delay, and end of main thread
// Methods       : run(), start(), join(), sleep()
// Description   : Demonstrates multithreading with Thread.sleep() to pause execution in Java.
// Author        : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Demo extends Thread{
    public void run(){ 
        int i = 0;
        try{
            for (i = 1; i <= 10; i++) {
                System.out.println("Inside Run Method of: " + Thread.currentThread().getName() + ": " + i);     
                Thread.sleep(3000);   // Pause for 3 seconds
            }
        }
        catch(Exception eobj){
            // Exception handling for InterruptedException
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Shows execution of main thread and two child threads with sleep() delay.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class MultiThreadingSleep{
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
