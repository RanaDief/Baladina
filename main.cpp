#include "CreditCard.h"
#include "GuessGame.h"
#include "TicTacToe.h"
#include "Restaurant.h"
#include "Menu.h"
#include "Event.h"
using namespace std;

int main() {
    clearTerminal();

    Restaurant restaurant("Baladina", "123 On the main street in Zewail City", "Zewailiany", 50); // capacity = 50

    restaurant.addFreeTable(1, "Table 1");
    restaurant.addFreeTable(2, "Table 2");
    restaurant.addFreeTable(3, "Table 3");

    cout << "Restaurant Information\n";
    cout << "Name: " << restaurant.getName() << "\n";
    cout << "Address: " << restaurant.getAddress() << "\n";
    cout << "Cuisine: " << restaurant.getCuisine() << "\n";
    cout << "Capacity: " << restaurant.getCapacity() << "\n";
    restaurant.displayFreeTables();

    Menu menu;

    menu.addDish("Pizza");
    menu.addDish("French fries");
    menu.addDish("Steak");
    menu.addDish("White Sauce Pasta");

    char choice;
    bool condition = true;

    CreditCard card;
    Customer test;
    vector<Customer> customers;

    do {
        startup();
        cin >> choice;

        switch (choice) {
        case '1':
            card.menu();
            break;
        case '2':
            test.First_time();
            customers.push_back(test);
            break;
        case '3':
            test.PersonalInfo_edit();
            break;
        case '4':
            cout << "Order\n";
            menu.placeOrder();
            break;
        case 'q':
            cout << "Exiting...\n";
            clearTerminal();
            condition = false;
            break;
        default:
            cout << "\nInvalid choice. Please try again.\n\n";
        }
    } while (condition);

    save_data(customers);

    return 0;
}