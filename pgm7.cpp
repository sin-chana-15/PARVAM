#include <iostream>
using namespace std;
class car
{
public:
    string brand;
    int speed; 

    car()
    {
        brand = "John";
        speed = 0;
        cout << "Default constructor Called!," << endl;
    }

    car(string b, int s)
    {
        brand = b;
        speed =s;
        cout << "Parameterized Constructed Called!," << endl;
    }

    car(const car &c)
    {
        brand = c.brand;
        speed = c.speed;
        cout << "Copy Constructor Called!," << endl;
    }

    void drive()
    {
        cout << "Driving" << brand << " at " << speed << " km/h," << endl;    
    }
};

int main()
{
    car car1;
    car1.drive();

    car car2("Honda", 100);
    car2.drive();

    car car3 = car2;

    return 0;
}