#include<iostream>
using namespace std;
int main(){
    int num , dum , cnt = 0;
    cout<<"Enter Number : ";
    cin>>num;
    dum = num;
    while(dum != 0){
        dum = dum / 10;
        cnt++;
    }
    cout<<"There are "<< cnt <<" Digits in "<< num << ".";
}