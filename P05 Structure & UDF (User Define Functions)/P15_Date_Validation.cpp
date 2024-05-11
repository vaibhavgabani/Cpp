#include <iostream>
using namespace std;

int checkdate(int, int, int);

int main() {
    int day, month, year;

    cout << "Enter date (DD MM YYYY): ";
    cin >> day >> month >> year;
    int check = checkdate(day, month, year);
    if (check == 0) {
        cout << "Date is valid";
    } else {
        cout << "Date is not valid";
    }
    return 0;
}

int checkdate(int day, int month, int year) {
    if (year < 1900 || year > 2100) {
        return 1; // Date is not valid
    }

    if (month < 1 || month > 12) {
        return 1; // Date is not valid
    }

    if (day < 1 || day > 31) {
        return 1; // Date is not valid
    }

    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
        return 1; // Date is not valid
    }

    if (month == 2) {
        // Check for leap year
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            if (day > 29) {
                return 1; // Date is not valid
            }
        } else {
            if (day > 28) {
                return 1; // Date is not valid
            }
        }
    }

    return 0; // Date is valid
}
