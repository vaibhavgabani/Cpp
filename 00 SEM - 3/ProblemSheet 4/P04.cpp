/*
 * P04.cpp
 *
 *  Created on: 14-Oct-2024
 *      Author: root
 */



#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class item {
public:
    string name, category;
    float price_of_single_unit;
};

class cart : public item {
public:
    int units, product_no;
    float total_price;

    cart() {}

    cart(int product_no, string name, string category, float price_of_single_unit, int units) {
        this->product_no = product_no;
        this->name = name;
        this->category = category;
        this->units = units;
        this->price_of_single_unit = price_of_single_unit;
        this->total_price = price_of_single_unit * units;
    }

    void display() {
        cout << left << setw(10) << product_no << setw(15) << name << setw(15) << category << setw(10) << units << setw(15) << total_price << endl;
    }
};

int main() {
    const int MAX_ITEMS = 50;
    cart c[MAX_ITEMS];
    int size = 0, choice;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Insert Item Details\n";
        cout << "2. Display Item Details\n";
        cout << "3. Generate Bill\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                // No conditional check to limit input size
                int product_no, units;
                string name, category;
                float price_of_single_unit;

                cout << "Enter product number: ";
                cin >> product_no;
                cout << "Enter name: ";
                cin >> ws; // To consume any leading whitespace
                getline(cin, name);
                cout << "Enter category: ";
                getline(cin, category);
                cout << "Enter price of single unit: ";
                cin >> price_of_single_unit;
                cout << "Enter number of units: ";
                cin >> units;

                // Store the new item directly
                c[size] = cart(product_no, name, category, price_of_single_unit, units);
                size++;
                cout << "Item added to cart!\n";
                break;
            }

            case 2:
                cout << "\nCart Items:\n";
                if (size == 0) {
                    cout << "Cart is empty.\n";
                } else {
                    cout << left << setw(10) << "Prod No" << setw(15) << "Name" << setw(15) << "Category" << setw(10) << "Units" << setw(15) << fixed << setprecision(2) << "Total Price" << endl;
                    for (int i = 0; i < size; i++) {
                        c[i].display();
                    }
                }
                break;

            case 3: {
                if (size == 0) {
                    cout << "Cart is empty. No bill to generate.\n";
                } else {
                    string c_name;
                    int u_purchase, p_id, flag = 0;
                    float total_price = 0;

                    cout << "Enter customer name: ";
                    cin >> ws;  // Consume any leading whitespace
                    getline(cin, c_name);

                    // Multiple product purchase loop
                    char add_more;
                    do {
                        cout << "Enter product ID: ";
                        cin >> p_id;

                        // Check if product exists
                        flag = 0;
                        int index = -1;
                        for (int i = 0; i < size; i++) {
                            if (p_id == c[i].product_no) {
                                flag = 1;
                                index = i;
                                break;
                            }
                        }

                        if (flag == 0) {
                            cout << "Product not found! Try again.\n";
                            continue;
                        }

                        cout << "Enter number of units purchased: ";
                        cin >> u_purchase;

                        if (u_purchase > c[index].units) {
                            cout << "Error: Insufficient units in stock! Available units: " << c[index].units << endl;
                        } else {
                            c[index].units -= u_purchase;
                            float item_total = u_purchase * c[index].price_of_single_unit;
                            total_price += item_total;

                            // Display item details in the bill format
                            cout << "\nProduct purchased:\n";
                            cout << left << setw(10) << "Prod No" << setw(15) << "Name" << setw(10) << "Units Purchased" << setw(15) << "Price/Unit" << setw(15) << "Total Price" << endl;
                            cout << left << setw(10) << c[index].product_no << setw(15) << c[index].name << setw(10) << u_purchase << setw(15) << fixed << setprecision(2) << c[index].price_of_single_unit << setw(15) << item_total << endl;
                        }

                        // Ask if customer wants to add more items
                        cout << "Do you want to purchase another item? (y/n): ";
                        cin >> add_more;

                    } while (add_more == 'y' || add_more == 'Y');

                    // Display final total price
                    cout << "\n************ Final Bill ************\n";
                    cout << "Customer Name: " << c_name << endl;
                    cout << "Total Price to Pay: $" << fixed << setprecision(2) << total_price << endl;
                    cout << "***********************************\n";
                }
                break;
            }

            case 0:
                cout << "Exiting the program.\n";
                return 0;

            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    }

    return 0;
}
