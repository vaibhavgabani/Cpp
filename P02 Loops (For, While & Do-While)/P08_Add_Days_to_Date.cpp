#include <iostream>
using namespace std;
int main() {
    int day, month, year, daysToAdd;

    // Input current date
    cout << "Enter current date (day month year): ";
    cin >> day >> month >> year;

    // Input number of days to add
    cout << "Enter number of days to add: ";
    cin >> daysToAdd;

    // Add days
    day += daysToAdd;
    
    // Update month and year if necessary
    if (day > 31) {
        if (month == 2) {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                if (day > 29) {
                    day -= 29;
                    month++;
                }
            } else {
                if (day > 28) {
                    day -= 28;
                    month++;
                }
            }
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            if (day > 30) {
                day -= 30;
                month++;
            }
        } else {
            if (day > 31) {
                day -= 31;
                month++;
                if (month > 12) {
                    month = 1;
                    year++;
                }
            }
        }
    }
    cout << "New date: " << day << " " << month << " " << year << endl;
}
