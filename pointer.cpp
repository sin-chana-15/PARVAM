#include <iostream>
using namespace std;

class Dog
{
public:
    void bark()
    {
        coot << "Woof!" << endl;
    }
};

int main()
{
    Dog *d = new Dog();
    d->bark();
    delete d;
    return 0;
}
