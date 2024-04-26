#include <stdio.h>
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

class Menu {
public:
    int pork_cost;
    int beef_cost;
    int chicken_cost;
    int refill_cost;

    Menu() {
        pork_cost = 50;
        beef_cost = 80;
        chicken_cost = 60;
        refill_cost = 20;
    }
};

class Welcome : public Menu {
public:
    int customer_num;
    int level;
    char refill_water;

    int pork_quantity;
    int beef_quantity;
    int chicken_quantity;

    Welcome() : Menu() {
        pork_quantity = 0;
        beef_quantity = 0;
        chicken_quantity = 0;
    }

    void askCustomer() {
        cout << "Welcome to suki_T-Rex" << endl;
        cout << "Type Amount Of Customer: ";
        cin >> customer_num;
    }

    void askLevel() {
        cout << "Please Choose Level Of Buffet" << endl;
        cout << "1. Standard (pork only)\n2. Premium (pork, beef, chicken)" << endl;
        cout << "Select level 1 or 2: ";
        cin >> level;

        if (level == 1) {
            pork_quantity = 20;
        } else if (level == 2) {
            pork_quantity = 15;
            beef_quantity = 10;
            chicken_quantity = 15;
        }
    }

    void askRefill() {
        cout << "Do you want refill water? (Y/N): ";
        cin >> refill_water;
    }

    void placeMeatOrder() {
        int pork_order = 0, beef_order = 0, chicken_order = 0;

        cout << "Enter the quantity of pork: ";
        cin >> pork_order;

        if (level == 2) {
            cout << "Enter the quantity of beef: ";
            cin >> beef_order;
            cout << "Enter the quantity of chicken: ";
            cin >> chicken_order;
        }

        pork_quantity -= pork_order;
        beef_quantity -= beef_order;
        chicken_quantity -= chicken_order;

        cout << "Meat order placed successfully!" << endl;
    }

    int calculateTotalCost() const {
        int total_cost = 0;

        total_cost += pork_cost * (20 - pork_quantity);
        total_cost += beef_cost * (10 - beef_quantity);
        total_cost += chicken_cost * (15 - chicken_quantity);

        if (refill_water == 'Y' || refill_water == 'y') {
            total_cost += refill_cost;
        }

        return total_cost;
    }
};

class FileHandler {
public:
    void writeToFile(const Welcome& customer) {
        ofstream file("customer_order.txt");

        if (file.is_open()) {
            file << "Customer Number: " << customer.customer_num << endl;
            file << "Level: " << customer.level << endl;
            file << "Pork Quantity: " << customer.pork_quantity << endl;
            file << "Beef Quantity: " << customer.beef_quantity << endl;
            file << "Chicken Quantity: " << customer.chicken_quantity << endl;
            file << "Refill Water: " << customer.refill_water << endl;

            int total_cost = customer.calculateTotalCost();
            file << "Total cost: " << total_cost << " THB" << endl;

            cout << "Order details written to file successfully!" << endl;
            cout << "Total cost: " << total_cost << " THB" << endl;

            file.close();
        } else {
            cout << "Unable to open file." << endl;
        }
    }
};

int main() {
    Welcome customer;
    customer.askCustomer();
    customer.askLevel();
    customer.askRefill();
    customer.placeMeatOrder();

    FileHandler fileHandler;
    fileHandler.writeToFile(customer);

    return 0;
}
