#include <iostream>
using namespace std;

void fibonacci(int);

int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n;
    cout << "Fibonacci series: ";
    fibonacci(n);
    return 0;
}

void fibonacci(int n) {
    int a = 0;
    int b = 1;
    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
    }
}
