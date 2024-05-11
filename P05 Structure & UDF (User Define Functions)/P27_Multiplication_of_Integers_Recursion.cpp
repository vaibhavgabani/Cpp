#include <iostream>
using namespace std;

int multiply(int x, int y) {
    if (y <= 0) {
        return 0;
    } else {
        return x + multiply(x, y - 1);
    }
}

int main() {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Product: " << multiply(a, b);
    return 0;
}
