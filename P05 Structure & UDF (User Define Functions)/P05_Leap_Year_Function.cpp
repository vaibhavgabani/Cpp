#include <iostream>
using namespace std;

int leap(int);

int main() {
    int year;
    cout << "Enter year: ";
    cin >> year;

    int temp = leap(year);
    if (temp == 0) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }
    return 0;
}

int leap(int n) {
    if (n % 4 == 0) {
        return 0;
    } else {
        return 1;
    }
}
