#include <iostream>
using namespace std;

int armstrong(int);

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    int ams = armstrong(n);
    if (ams == 1) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }
    return 0;
}

int armstrong(int n) {
    int numDigits = 0;
    int temp = n;
    int sum = 0;

    while (temp != 0) {
        temp /= 10;
        numDigits++;
    }

    temp = n;

    while (temp != 0) {
        int digit = temp % 10;
        int pow = 1;
        for (int i = 0; i < numDigits; i++) {
            pow *= digit;
        }
        sum += pow;
        temp /= 10;
    }

    if (sum == n) {
        return 1;
    } else {
        return 0;
    }
}
