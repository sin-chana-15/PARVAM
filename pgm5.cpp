#include <iostream>
using namespace std;

class Product
{
private:
    int quantity;
    float pricePerItem;

public:

    void setProduct(int q, float price)
    {
        if (q > 0 && price > 0)
        {
            quantity = q;
            pricePerItem = price;
        }
        else
        {
            cout << "Invalid quantity or price!" << endl;
        }
        
    }

    float getTotalPrice()
    {
        float effectivePrice = pricePerItem;
    }

    if (pricePerItem > 2000)
}