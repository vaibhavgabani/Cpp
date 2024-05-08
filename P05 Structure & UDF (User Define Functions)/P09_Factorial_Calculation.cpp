#include <iostream>
using namespace std;

int factor(int);

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    int fact = factor(n);
    cout << "Factorial of " << n << " is: " << fact << endl;
    return 0;
}

int factor(int n) {
    int fac = 1;
    for (int i = 1; i <= n; i++) {
        fac *= i;
    }
    return fac;
}
