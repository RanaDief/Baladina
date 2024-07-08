#include "Order.h"
#include <iostream>

using namespace std;

Order::Order()
    : item(""), quantity(0), isDelivery(false), deliveryAddress(nullptr) {}

Order::Order(const string& item, int quantity)
    : item(item), quantity(quantity), isDelivery(false), deliveryAddress(nullptr) {}

void Order::setItem(const string& item) {
    this->item = item;
}

string Order::getItem() const {
    return item;
}

void Order::setQuantity(int quantity) {
    this->quantity = quantity;
}

int Order::getQuantity() const {
    return quantity;
}

void Order::setDelivery(bool isDelivery) {
    this->isDelivery = isDelivery;
}

bool Order::getDelivery() const {
    return isDelivery;
}

void Order::setAddress(DeliveryAddress* address) {
    deliveryAddress = address;
}

DeliveryAddress* Order::getAddress() const {
    return deliveryAddress;
}

void Order::placeOrder() {
    cout << "Order Summary:\n";
    cout << "Item: " << item << "\n";
    cout << "Quantity: " << quantity << "\n";

    if (isDelivery) {
        cout << "Delivery Address:\n";
        deliveryAddress->displayAddress();
    }

    cout << "Order placed successfully!\n";
}