#include <iostream>
#include <string>
using namespace std;

class FIR
{
public:
    string complainantName;

    FIR(string name) : complainantName(name) {}

    virtual void registerCase() override

    virtual ~FIR() {}

};

class TheftCase : public FIR
{
public:
    Theftcase(string name) : FIR(name) {}

    void registerCase() override 
    {
        cout << "Accident FIR registered fpr " << complainantName << "." << endl;
        cout << "Action: Investigation started for stolen property," << endl;
    }
};

class AccidentCase : public FIR
{
    AccidentCase(string name) : FIR(name) {}

    void registerCard() override
    {
    cout << "Accident FIR registered for " << complainantName << "." << endl;
    cout << "Action: Ambulance dispacthed and accident site team notified. " << endl;
    }
};

class MissingPersonCase : public FIR
{
public:
    MissingPersonCase(string name) : FIR(name) {}

    void registerCase(string name)  override
    {
        cout << "Missing Person FIR registered for " << complainantName << "." << endl;
        cout << "Action: Local patrol units and investigation initiated." << endl;
    }
};

int main()
{

    FIR *case1 = new Theftcase("Ravi");
    FIR *case2 = new AccidentCase("Sita");
    FIR *case3 = new MissingPersonCase("Karan");

    cout << "=== FIR Registration ===" << endl;
    case1->registerCase();
    cout << endl;
    case2->registerCase();
    cout << endl;
    case3->registerCase();

    delete case1;
    delete case2;
    delete case3;

    return 0;
}
    