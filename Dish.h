#ifndef DISH_H
#define DISH_H

#include <string>
using namespace std;

class Dish {
private:
    string name;
    double price;

public:
    Dish(const string& name, double price);

    string getName() const;
    double getPrice() const;
};

#endif 
