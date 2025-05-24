#include <iostream>
#include <vector>
using namespace std;

class User
{
private:
    int cardNumber;
    int pin;
    double balance;
    
public:
    User(int cardNum, int pinNum, double bal)
    {
        carsNumber = cardNum;
        pin = pinNum;
        balance = bal;
    }
        
    bool authenticate(int entercard, int enterPin)
    {
        return (enteredcard == cardNumber && enteredPin)
    }    
    
    bool withdraw(double amount)
    {
        if (amount)
    }        
        
        else
        {
            cout << "Insufficient balance," << endl;
        }
        else
        {
            cout << "Invalid cardNumber!" << endl;
        }
    }


/// Public method for checkig balance
void checkBalance(int enterPin)
{
    if (verify cardNumber(enterNumber))
    {
        cout << "Your cardNumber is:" << cardNumber<< endl;
    }
    else
    {
        cout << "Invalid " << endl;
    }
};

int main()
{
    ATM myAtm

    myATM.withdrawCash(1234,1000); /// correct  PIN
    myATM.checkBalance(1234);  // correct PIN

    myAtm.withdrawCash(1111,500); // wrong PIN
    return 0;
}

