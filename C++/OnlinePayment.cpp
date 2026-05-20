////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : Online Payment Polymorphism Demo
// Input        : None
// Output       : Prints payment method messages
// Methods      : pay()
// Description  : Demonstrates runtime polymorphism using virtual functions in C++.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class OnlinePayment {
public:
    virtual void pay() {
        cout << "Processing online payment..." << endl;
    }
};

class CardPayment : public OnlinePayment {
public:
    void pay() override{
        cout << "Paying using Debit/Credit Card" << endl;
    }
};

class GPayPayment : public OnlinePayment {
public:
    void pay() override {
        cout << "Paying using GPay UPI" << endl;
    }
};

class BankPayment : public OnlinePayment {
public:
    void pay() override {
        cout << "Paying using Net Banking" << endl;
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Demonstrates runtime polymorphism with different payment methods.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() {
    OnlinePayment* payment;

    CardPayment card;
    GPayPayment gpay;
    BankPayment bank;

    payment = &card;
    payment->pay();

    payment = &gpay;
    payment->pay();

    payment = &bank;
    payment->pay();

    return 0;
}
