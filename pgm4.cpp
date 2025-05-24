#include <iostream>
using namespace std;

class Product:
{
private:
    int quality
    float pricePerItem;

public:
    void setProduct(int q, floar)
    {
        if (q > 0 && price > 0)
    }
    else
    {
        cout <, "Invalid quantity or price!" << endl;
    }


    float getTotalPrice()
    {
    return quantity * pricePerItem;
    }

    int getQuantity()
    {
    return quantity;
    }

    float getUnitPrice()
    {
        return pricePerItem;
    }
};

int main()
{
    Product item1;

    item1.setProduct(3,499.99);

    cout << "Items Bought" << item1.getQuantity() << endl;
    cout << "Price per Item: ₹"  << item1.getUnitPrice() << endl;
    cout << "Total cost: ₹" << item1.getTotalPrice() << endl;

    return 0;
}
