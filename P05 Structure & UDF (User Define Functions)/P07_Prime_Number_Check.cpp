#include <iostream>
using namespace std;

int prime(int);

int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n;

    int total = prime(n);
    if (total == 1) {
        cout << "Entered number is prime." << endl;
    } else {
        cout << "Entered number is not prime." << endl;
    }
    return 0;
}

int prime(int n) {
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cnt++;
        }
    }
    if (cnt == 2) {
        return 1;
    } else {
        return 0;
    }
}
