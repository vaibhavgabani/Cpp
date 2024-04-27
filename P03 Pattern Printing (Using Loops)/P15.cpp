#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    if (num > 0) {
        // upside
        for (int i = 1; i <= num; i++) {
            int d = num - i + 1;
            for(int j = 1 ; j <= i ; j++){
                cout<<" "<<d;
                d++;
            }
            for(int  k = 1 ; k <= num - i ; k++){
                cout<<" "<<num;
            }
            cout << endl;
        }
    } else {
        cout << "Enter Positive number..\n";
    }

    return 0;
}
