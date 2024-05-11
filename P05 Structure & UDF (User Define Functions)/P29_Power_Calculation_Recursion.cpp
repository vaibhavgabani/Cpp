#include <iostream>
using namespace std;

int power(int, int);

int main() {
    int m, n;
    cout << "Enter Number: ";
    cin >> m;
    cout << "Enter Power: ";
    cin >> n;
    int ans = power(m, n);
    cout << m << " Power " << n << " is: " << ans;
    return 0;
}

int power(int n, int m) {
    if (m <= 0) {
        return 1;
    } else {
        return n * power(n, m - 1);
    }
}
