#include <iostream>
using namespace std;

int amstrong(int);

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    int ams = amstrong(n);
    if (ams == 1) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }
    return 0;
}

int amstrong(int n) {
    int dum = n;
    int sum = 0;
    while (n > 0) {
        int r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    if (sum == dum) {
        return 1;
    } else {
        return 0;
    }
}
