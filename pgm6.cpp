#include <iostream>
using namespace std;

class Product
{
private:
    string name;
    double price;
    double discount;

public:
    Product(string name, double price)
    {
        this->name = name;
        this->price = price;
        this->discount = 0.0;
    }

    Product &setDiscout(double percent)
    {
        this->discount = percent;
        return *this;
    }

    double getFinalPrice() const
    {
        return price - (price * discount / 100.0);
    }

    bool operator>(const Product &other) const
    {
        return this->getFinalPrice() >  other.getFinalPrice();
    }
    void show() const
    
        cout << "Product : " << name
             << ", Original Price:  $ " << price
             << ", Discount: "  << discount << "%"
             << ", getFinalPrice: $" < getFinalPrice()
             << endl;
    }
};

int main()
{
    Product laptop("laptop", 1200.00);
    product tablet("Tablet", 900.00);

    laptop.setDiscount(15).show();
    tablet.setDiscount(5).show();

    if (laptop > tablet)
    {
        cout << laptop.getFinalPrice() << "  is more expensive than" << tablet.getFInalPrice() << endl;
    }
    else
    }
        cout << tablet.getFinalPrice() << "is more expensive than " << laptop.getFinalPrice() << endl;"
    }
    
    return 0;
}



