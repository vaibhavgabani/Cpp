#include <iostream>
using namespace std;

struct Date {
    int day, month, year;
};

int isValidDate(Date a, Date b);
int isDateValid(int d, int m, int y);

int main() {
    Date d, e;
    int res1, res2;
    cout << "Enter Date 1 in (dd/mm/yy) : ";
    cin >> d.day >> d.month >> d.year;
    cout << "Enter Date 2 in (dd/mm/yy) : ";
    cin >> e.day >> e.month >> e.year;

    res1 = isDateValid(d.day, d.month, d.year);
    res2 = isDateValid(e.day, e.month, e.year);
    if (res1 == 0 && res2 == 0) {
        if (isValidDate(d, e) == 0) {
            cout << "\nBoth dates are the same.";
        } else {
            cout << "\nBoth dates are not the same.";
        }
    } else {
        cout << "\nInvalid date";
    }
    return 0;
}

int isValidDate(Date a, Date b) {
    if (a.day == b.day && a.month == b.month && a.year == b.year) {
        return 0;
    }
    return 1;
}

int isDateValid(int d, int m, int y) {
    if (y >= 999 && y <= 9999) {
        if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
            if (d >= 1 && d <= 31) {
                return 0;
            }
        } else if (m == 4 || m == 6 || m == 9 || m == 11) {
            if (d >= 1 && d <= 30) {
                return 0;
            }
        } else if (m == 2) {
            if (y % 4 == 0) {
                if (d >= 1 && d <= 29) {
                    return 0;
                }
            } else {
                if (d >= 1 && d <= 28) {
                    return 0;
                }
            }
        }
        return 1;
    }
    return 1;
}
