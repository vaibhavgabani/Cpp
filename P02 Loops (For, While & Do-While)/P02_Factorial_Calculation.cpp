#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    if(num > 0){
        int fact = 1;
        for(int i = 1 ; i <= num ; i++){
            fact *= i;
        }
        cout<<"Factorial is : " << fact;
    } else {
        cout<<"Enter Valid number.\n";
    }
}