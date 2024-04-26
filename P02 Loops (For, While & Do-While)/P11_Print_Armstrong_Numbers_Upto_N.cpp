#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    if(num > 0){
        for(int i = 1 ; i <= num ; i++){
            int dum = i , cnt = 0 , sum = 0;
            while(dum > 0){
                dum = dum / 10;
                cnt++;
            }
            dum = i;
            while(dum > 0){
                int p = 1;
                int r = dum % 10;
                for(int i = 1 ; i <= cnt ; i++){
                    p = p * r;
                }
                sum = sum + p;
                dum = dum / 10;
            }
            if(sum == i){
                cout<< i << " is Armstrong Number.\n";
            }
        }
    } else {
        cout<<"Enter Valid number.\n";
    }
}