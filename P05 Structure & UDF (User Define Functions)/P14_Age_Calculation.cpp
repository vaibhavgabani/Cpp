#include <iostream>
using namespace std;

int daysInMonth(int month, int year);
void calcAge(int cd, int cm, int cy, int bd, int bm, int by);

int main() {
    int bd, bm, by, cd, cm, cy;
    cout << "Enter Birth Date (day month year): ";
    cin >> bd >> bm >> by;

    cout << "Enter Today's Date (day month year): ";
    cin >> cd >> cm >> cy;

    calcAge(cd, cm, cy, bd, bm, by);

    return 0;
}

int daysInMonth(int month, int year) {
    // Return the number of days in the given month and year
    switch (month) {
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) // Leap year check
                return 29;
            else
                return 28;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        default:
            return 31;
    }
}

void calcAge(int cd, int cm, int cy, int bd, int bm, int by) {
    if (bd > cd) {
        cm = cm - 1;
        cd = cd + (daysInMonth(cm, cy) - bd);
    }
    if (bm > cm) {
        cy = cy - 1;
        cm = cm + 12;   
    }

    int c_d = cd - bd;
    int c_m = cm - bm;
    int c_y = cy - by;

    cout << "\nCompleted year : " << c_y;
    cout << "\nCompleted Month : " << c_m;
    cout << "\nCompleted days : " << c_d;
}