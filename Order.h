#ifndef ORDER_H
#define ORDER_H

#include <string>
#include "Delivery address.h"
using namespace std;

class Order {
private:
    string item;
    int quantity;
    bool isDelivery;
    DeliveryAddress* deliveryAddress;

public:
    Order();
    Order(const string& item, int quantity);

    void setItem(const string& item);
    string getItem() const;

    void setQuantity(int quantity);
    int getQuantity() const;

    void setDelivery(bool isDelivery);
    bool getDelivery() const;

    void setAddress(DeliveryAddress* address);
    DeliveryAddress* getAddress() const;

    void placeOrder();
};

#endif 