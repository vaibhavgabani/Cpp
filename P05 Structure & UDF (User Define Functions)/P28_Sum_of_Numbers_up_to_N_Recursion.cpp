#include <iostream>
using namespace std;

int add(int);

int main() {
    int num;
    cout << "Enter Number: ";
    cin >> num;
    int ans = add(num);
    cout << "Sum of numbers up to " << num << " is: " << ans;
    return 0;
}

int add(int n) {
    if (n <= 0) {
        return 0;
    } else {
        return n + add(n - 1);
    }
}
