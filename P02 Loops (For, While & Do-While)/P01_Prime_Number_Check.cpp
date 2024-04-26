#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    if(num > 0){
        int cnt = 0;
        for(int i = 1 ; i <= num ; i++){
            if(num % i == 0){
                cnt++;
            }
        }
        if(cnt == 2){
            cout<< num <<" is Prime Number.\n";
        } else {
            cout<< num <<" is Not Prime Number.\n";
        }
    } else {
        cout<<"Enter Valid number.\n";
    }
}