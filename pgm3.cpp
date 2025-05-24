#include <iostream>
using namespace std;

class Student {

public:
    int RollNumber;

public:
    void setRollNumber(int r)

    {
        RollNumber = r;    
    }
    
    int getRollNumber()
    {
        return RollNumber;
    }
};

int main()
{
    Student s1;

    s1.setRollNumber(101);
    cout << s1.getRollNumber() << endl; 

    return 0;
}
