#ifndef DISCOUNT_H
#define DISCOUNT_H

#include <vector>
using namespace std;

class Discount {
public:
    // Constructor discount rate argument
    Discount(double baseRate);

    // Setter and getter for base discount rate
    void setBaseDiscountRate(double rate);
    double getBaseDiscountRate() const;

    //set loyalty points levels
    void setLoyaltyPointsLevels(const vector<int>& levels);

    //calculate discount based on loyalty points
    double calculateDiscount(int loyaltyPoints);

private:
    double baseDiscountRate; //variable to store the base discount rate
    vector<int> loyaltyPointsLevels;
};

#endif 
