#include <iostream>
#include <string>
using namespace std;

class Booking
{
public:
    string customerName;
    int seats;

    Booking(string name ="", int s =1) : customerName(name),seats(s) {}

    virtual void bookTicket() = 0;

    virtual ~Booking() {}

};

class FlightBooking : public Booking
{
public:
    FlightBooking(string namee, int s) : Booking(name, s) {}

    void bookTicket() override
    {
        cout << "Flight ticket booked for " << customerName
             <<" with " << seats << "seat(s)." <<enfl;
    }
};

class TrainBooking
{
public:
    TrainBooking(string name, int s) : Booking(name, s) {}
    
    void bookTicket() override
    {s
        cout << "Train ticket booked for " << customerName
             <<" with " << seats << " seat(s)," << endl;
    }
};

class BusBooking : public Booking 
{
public:
    BusBooking(string name, int s) : Booking(name,s) {}

    void bookTicket() override
    {
        cout << "Bus ticket booked for " << customerName
             << " with " << seats << " seat(s)," << endl;
    }
};

Class BookManager
{
public:
    void confirmBooking(string name, int seats)
    {
        cout << "Booking confirmed for: " << name << endl;
    }

    void confirmBooking(string name, int seats)
    {
        cout << "Booking confirmed for: " << " with " << seats << " seat(s)." << endl;
    }
};


