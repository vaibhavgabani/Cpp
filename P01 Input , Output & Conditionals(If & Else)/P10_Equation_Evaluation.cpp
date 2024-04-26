#include <iostream>
using namespace std;

int main() {
    int a, b, c, y, k;

    // Input values of a, b, c, and y
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;
    cout << "Enter the value of y: ";
    cin >> y;

    // Evaluate k using the given equations
    int z = a * a + 2 * a * b - c;
    int x = (b * b - 2 * a * c - z) / 2 / a;
    k = (y - z - 5 * x) / (2 * b - 2 * y);

    // Output the value of k
    cout << "The value of k is: " << k << endl;

    return 0;
}
