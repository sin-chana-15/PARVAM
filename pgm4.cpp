#include <iostream>
using namespace std;
class Demo
{
public:
    Demo()
    {
        cout << "Consturctor called!" << endl;
    }
    ~Demo()
    {
        cout << "Destructor called!" << endl;
    }
};
int main()
{
    Demo d1;
    return 0;
}