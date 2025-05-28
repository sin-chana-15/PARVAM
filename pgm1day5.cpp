#include <iostream>
using namespace std;

class Invoice
{
public:
    void generateInvoice(int productId):
    {
        cout << "Generating for product ID": << productID <<endl;
        cout << "Default quantity: 1| No discount applied," << endl;
    }

    void generateInvoice(int productId, int quantity):
    {
        cout << "Generating:" << quantity << " | No discount applied," << endl;
        cout << "Quantity:" << quantity << " | discount: " << discount << "%" << endl;
    }
};

int main()
{
    Invoice inv;

    inv.generateInvoice(101);
    inv.generateInvoice(102,3);
    inv.generateInvoice(103, 5, 10.5);

    return 0;
}
