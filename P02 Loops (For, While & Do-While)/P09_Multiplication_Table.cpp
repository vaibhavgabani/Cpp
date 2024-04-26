#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    if(num > 0){
        for(int i = 1 ; i <= 10 ; i++){
            cout<<"2 X "<< i <<" = "<<(num * i)<<endl;
        }
    } else {
        cout<<"Enter Valid number.\n";
    }
}