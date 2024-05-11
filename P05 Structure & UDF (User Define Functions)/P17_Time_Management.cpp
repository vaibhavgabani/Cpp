#include <iostream>
using namespace std;

struct Time {
    int ss;
    int mm;
    int hh;
};

Time input();
void display(Time);
int validate(Time);

int main() {
    Time s;
    // input
    s = input();
    // display
    display(s);
    // check
    int check = validate(s);
    if (check == 0) {
        cout << "\nEnter Time is Valid.";
    } else {
        cout << "\nEnter Time is not Valid.";
    }
    return 0;
}

Time input() {
    Time t;

    cout << "Enter second : ";
    cin >> t.ss;

    cout << "Enter Minute : ";
    cin >> t.mm;

    cout << "Enter Hours : ";
    cin >> t.hh;

    return t;
}

void display(Time t) {
    cout << "\n" << t.ss << ":" << t.mm << ":" << t.hh;
}

int validate(Time t) {
    if (t.hh >= 0 && t.hh <= 23 && t.mm >= 0 && t.mm <= 59 && t.ss >= 0 && t.ss <= 59) {
        return 0; // valid
    } else {
        return 1; // invalid
    }
}
