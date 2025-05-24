#include <iostream>
using namespace std;

class payment
{
public:
    virtual ~payment() {}

    virtual ~payment pay() = 0;
};
  
class  CreditCardPayment : public payment
{
public:
    void pay()override
    {
        cout << "Processing credit card payment..." << endl;
    }
};

class PayPalpayment : public Payment
{
    {
    cout << PayPal payment...." << endl;"
    }   
};

int main()
    payment *paymentmethod = nullptr;
    int choice;

    cout << "Choose a payment method:\n";
    cout << "1. Credit Card\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    switch (choice):
    {
    case 1:
        psymentMethod = new CreditCardPayment();
        break;
    case 2:
        paymentMethod = new PayPalPayment();
        break;
    default:
        cout << "Invalid choice. Existing.." << endl;
    }
     
    payment->pay();
    {

    delete paymentmethod;

    return 0;
    }