#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    if (num > 0) {
        // upside
        for (int i = 1; i <= num; i++) {
            if(i % 2 != 0){
                for(int j = 1 ; j <= num ; j++){
                    cout<<" "<<j;
                }
            } else {
                for(int k = num ; k >= 1 ; k--){
                    cout<<" "<<k;
                }
            }
            
            cout << endl;
        }
    } else {
        cout << "Enter Positive number..\n";
    }

    return 0;
}
