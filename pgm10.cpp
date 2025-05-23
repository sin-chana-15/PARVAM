#include <iostream>
using namespace std;
class person 
{
public:
    string name;
    int age;

    person()
    {
        name="Annoymous";
        age = 0;
    }

    person(string n,int a)
    {
        name = n;
        age = a;
    }
    void display()
    {
        cout << "Name:" << name << ",Age:" << endl;
    }
};
int main()
{
    person p1;
    person p2("John",25);
    p1.display();
    p2.display();
    return 0;
}
