#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    if(num > 0){
        int dum = num , cnt = 0 , sum = 0;
        while(dum > 0){
            dum = dum / 10;
            cnt++;
        }
        dum = num;
        while(dum > 0){
            int p = 1;
            int r = dum % 10;
            for(int i = 1 ; i <= cnt ; i++){
                p = p * r;
            }
            sum = sum + p;
            dum = dum / 10;
        }
        if(sum == num){
            cout<< num << " is Armstrong Number.";
        } else {
            cout<< num << " is Not Armstrong Number.";
        }
    } else {
        cout<<"Enter Valid number.\n";
    }
}