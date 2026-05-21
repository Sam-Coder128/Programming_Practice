////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Interface/Class Name(s) : Payment, UpiPayment, CardPayment, OnlinePay
// Input                   : Payment amount (double)
// Output                  : Prints payment method messages
// Methods                 : pay()
// Description             : Demonstrates interface implementation and polymorphism in Java.
// Author                  : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

interface Payment {
    void pay(double amount); // public abstract
}

class UpiPayment implements Payment {
    public void pay(double amount) {
        System.out.println("Paid ₹" + amount + " using UPI");
    }
}

class CardPayment implements Payment {
    public void pay(double amount) {
        System.out.println("Paid ₹" + amount + " using Card");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Demonstrates polymorphism with different payment implementations.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class OnlinePay {
    public static void main(String[] args) {
        Payment p1 = new UpiPayment();
        p1.pay(500);

        Payment p2 = new CardPayment();
        p2.pay(1200);
    }
}
