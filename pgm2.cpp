#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int age,USN;
    string clg;
    Student(string n, int a, int u,string m)
    {
        name = n;
        age = a;
        USN = u;
        clg = m;
        cout<< "Name:" << name <<", Age: " << age << ",USN:"<<USN << ",clg:" << clg << endl;
    }
};
int main()
{
    Student s1("Sinchana",18,124063,"City engineering college");
    return 0;
}
