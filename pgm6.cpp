#include <iostream>
using namesapce std;

class Shape
{
public:
    virtual void draw() = 0;
};

class Cirlce : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing Circle" << endl;
    }
};

int main()
{
    Circle c;
    c.draw();

    return 0;
}


