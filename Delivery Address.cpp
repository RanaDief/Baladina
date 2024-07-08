#include "Delivery Address.h"
#include <iostream>
using namespace std;

DeliveryAddress::DeliveryAddress()
    : recipientName(""), streetAddress(""), city("") {}

DeliveryAddress::DeliveryAddress(const string& recipientName, const string& streetAddress, const string& city)
    : recipientName(recipientName), streetAddress(streetAddress), city(city) {}

string DeliveryAddress::getStreetAddress() const {
    return streetAddress;
}

string DeliveryAddress::getCity() const {
    return city;
}

void DeliveryAddress::inputAddress() {
    cout << "Enter the street address: ";
    getline(cin, streetAddress);

    cout << "Enter the city: ";
    getline(cin, city);
}
