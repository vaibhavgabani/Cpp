#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    if (num > 0) {
        // upside
        for (int i = 1; i <= num; i++) {
            int d = 1;
            for (int j = 1; j <= num - i; j++) {
                cout << "  ";
            }
            for (int k = 1; k <= 2 * i - 1; k++) {
                cout << " " << d;
                d++;
            }
            cout << endl;
        }
    } else {
        cout << "Enter Positive number..\n";
    }

    return 0;
}
