#include <iostream>
using namespace std;

void fibo(int);

int main() {
    int num;
    cout << "Enter Number: ";
    cin >> num;
    fibo(num);
    return 0;
}

void fibo(int n) {
    static int a = 0, b = 1, cnt = 0;
    if (cnt < n) {
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
        cnt++;
        fibo(n);
    }
}
