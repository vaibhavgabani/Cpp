/*
 * P01.cpp
 *
 *  Created on: 10-Oct-2024
 *      Author: root
 */

#include <iostream>
using namespace std;

class Vehicle {
public:
    string vehicle_name;
    int Vehicle_no;
};

class two_Wheeler : public Vehicle {
public:
    string vehicle_type;
};

class two_Wheeler_with_cart : public two_Wheeler {
public:
    bool side_cart;

    void input() {
        cout << "Enter vehicle name: ";
        cin >> vehicle_name;
        cout << "Enter vehicle number: ";
        cin >> Vehicle_no;
        cout << "Enter vehicle type: ";
        cin >> vehicle_type;

        int cart_input;
        while (true) {
            cout << "Press 1: with cart, Press 2: without cart: ";
            cin >> cart_input;

            if (cart_input == 1) {
                side_cart = true;
                break;
            } else if (cart_input == 2) {
                side_cart = false;
                break;
            } else {
                cout << "Enter valid input (1 or 2)\n";
            }
        }
    }

    void display() {
        cout << "\nVehicle name: " << vehicle_name;
        cout << "\nVehicle number: " << Vehicle_no;
        cout << "\nVehicle type: " << vehicle_type;
        cout << "\nHas side cart: " << (side_cart ? "Yes" : "No") << endl;
    }

    bool operator==(const two_Wheeler_with_cart& obj) {
        return (vehicle_name == obj.vehicle_name &&
                Vehicle_no == obj.Vehicle_no &&
                vehicle_type == obj.vehicle_type &&
                side_cart == obj.side_cart);
    }
};

int main() {
    two_Wheeler_with_cart bike1, bike2;

    cout << "Enter details for Bike 1:\n";
    bike1.input();

    cout << "Enter details for Bike 2:\n";
    bike2.input();

    cout << "\nDetails of Bike 1:\n";
    bike1.display();

    cout << "\nDetails of Bike 2:\n";
    bike2.display();

    if (bike1 == bike2) {
        cout << "\nBoth bikes are the same.\n";
    } else {
        cout << "\nThe bikes are different.\n";
    }

    return 0;
}
