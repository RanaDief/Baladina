#ifndef DELIVERYADDRESS_H
#define DELIVERYADDRESS_H

#include <string>
using namespace std;

class DeliveryAddress {
private:
    string recipientName;
    string streetAddress;
    string city;

public:
    // Constructors
    DeliveryAddress();
    DeliveryAddress(const string& recipientName, const string& streetAddress, const string& city);

    // Getter 
    string getStreetAddress() const;
    string getCity() const;

    // Setter 
    void setStreetAddress(const string& address);
    void setCity(const string& cityName);

    void displayAddress() const;
    void inputAddress();
};

#endif 
