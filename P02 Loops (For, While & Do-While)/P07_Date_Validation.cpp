#include <iostream>
using namespace std;
int main() {
    int day, month, year;
    
    // Input day, month, and year from the user
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;

    // Check for valid month
    if (month < 1 || month > 12) {
        cout << "Invalid month!" << endl;
        return 0;
    }

    // Check for valid day
    if (day < 1 || day > 31) {
        cout << "Invalid day!" << endl;
        return 0;
    }

    // Check for months with 30 days
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
        cout << "Invalid date!" << endl;
        return 0;
    }

    // Check for February
    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            if (day > 29) {
                cout << "Invalid date!" << endl;
                return 0;
            }
        } else {
            if (day > 28) {
                cout << "Invalid date!" << endl;
                return 0;
            }
        }
    }
    cout << "Valid date!" << endl;

    return 0;
}
