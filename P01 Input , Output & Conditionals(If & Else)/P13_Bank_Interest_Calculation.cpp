#include<iostream>
using namespace std;
int main(){
    float amount;
    cout<<"Enter Amount : ";
    cin>>amount;
    if(amount > 0){
        if(amount >= 100000){
            cout<<"Your interest rate is : " << (amount * 12)/100;
        } else if (amount >= 60000 && amount < 100000){
            cout<<"Your interest rate is : " << (amount * 10)/100;    
        } else if (amount >= 30000 && amount < 60000){
            cout<<"Your interest rate is : " << (amount * 8)/100;    
        } else {
            cout<<"Your interest rate is : " << (amount * 7.2)/100;    
        }
    } else {
        cout<<"Enter valid amonut...\n";
    }
}