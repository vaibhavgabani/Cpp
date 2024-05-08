#include <iostream>
using namespace std;

int sum(int);

int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n;

    int tot = sum(n);
    cout << "Sum of digits of " << n << " is: " << tot;
    return 0;
}

int sum(int n) {
    int temp = 0;
    while (n > 0) {
        int r = n % 10;
        temp += r;
        n = n / 10;
    }
    return temp;
}
