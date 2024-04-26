#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    if(num > 0){
        for(int i = 1 ; i <= num ; i++){
            int cnt = 0;
            for(int j = 1 ; j <= i ; j++){
                if(i % j == 0){
                    cnt++;
                }
            }
            if(cnt == 2){
                cout<< i << " is Prime Number.\n";
            }
        }
    } else {
        cout<<"Enter Valid number.\n";
    }
}