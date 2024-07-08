#include "Dish.h"
using namespace std;

Dish::Dish(const string& name, double price) : name(name), price(price) {}

string Dish::getName() const {
    return name;
}

double Dish::getPrice() const {
    return price;
}
