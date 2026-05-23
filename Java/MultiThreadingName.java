////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name(s) : Demo, MultiThreadingName
// Input         : None
// Output        : Prints main thread message and run method messages with thread names
// Methods       : run(), start(), setName(), getName()
// Description   : Demonstrates multithreading and naming of threads in Java.
// Author        : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Demo extends Thread{
    public void run(){ 
        System.out.println("Inside Run Method of: " + Thread.currentThread().getName()); 
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Shows execution of main thread and two child threads with assigned names.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class MultiThreadingName{
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

