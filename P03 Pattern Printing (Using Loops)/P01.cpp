#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    if (num > 0) {
        // Upside-down triangle
        int a = 1;
        for (int i = 1; i <= num * 2 - 1; i++) {
            cout << " *";
        }
        cout << endl;

        for (int i = 1; i < num; i++) {
            for (int j = 1; j <= (num - i); j++) {
                cout << " *";
            }
            for (int k = 1; k <= a; k++) {
                cout << "  ";
            }
            a = a + 2;
            for (int z = 1; z <= (num - i); z++) {
                cout << " *";
            }
            cout << endl;
        }

        // Upright triangle
        int b = num * 2;
        for (int i = 1; i <= num; i++) {
            for (int z = 0; z < i; z++) {
                cout << " *";
            }
            for (int j = 1; j < b - 2; j++) {
                cout << "  ";
            }
            b = b - 2;
            for (int k = 0; k < i; k++) {
                cout << " *";
            }
            cout << endl;
        }
    } else {
        cout << "Enter a positive number.\n";
    }
    return 0;
}
