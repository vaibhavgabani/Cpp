#include <iostream>
using namespace std;

int fact(int);

int main() {
    int num;
    cout << "Enter Number: ";
    cin >> num;

    int ans = fact(num);

    cout << "Factorial is: " << ans << endl;

    return 0;
}

int fact(int n) {
    if (n == 1) {
        return 1;
    } else {
        n = n * fact(n - 1);
        return n;
    }
}
