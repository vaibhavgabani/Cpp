#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    if (num > 0) {
        for(int i = 1 ; i <= num ; i++){
            for(int j = 0 ; j < i ; j++){
                cout<<"  ";
            }
            for(int k = 0 ; k<= num - i ; k++){
                cout<<" *";
            }
            for(int z = 0 ; z< num - i ; z++){
                cout<<" *";
            }
            cout<<endl;
        }
        for(int i = 1 ; i < num ; i++){
            for(int j = 1 ; j <= num - i ; j++){
                cout<<"  ";
            }
            for(int k = 1 ; k <= i + 1; k++){
                cout<<" *";
            }
            for(int z = 1 ; z <= i ; z++){
                cout<<" *";
            }
            cout<<endl;
        }
    } else {
        cout << "Enter Positive number..\n";
    }

    return 0;
}
