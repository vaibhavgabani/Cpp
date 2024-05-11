#include <iostream>
using namespace std;

int power(int base, int exponent);
int isArmstrong(int n);

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    int armstrong = isArmstrong(n);
    if (armstrong == 1) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }
    return 0;
}

int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

int isArmstrong(int n) {
    int num = n;
    int digits = 0;
    int sum = 0;

    // Count the number of digits
    while (num != 0) {
        num /= 10;
        digits++;
    }

    num = n;

    // Calculate the sum of powers of each digit
    while (num != 0) {
        int digit = num % 10;
        sum += power(digit, digits);
        num /= 10;
    }

    // Check if the sum is equal to the original number
    return (sum == n) ? 1 : 0;
}
