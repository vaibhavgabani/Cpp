#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    int a = 0 , b = 1 ;
    if(num > 0){
        for(int i = 1 ; i <= num ; i++){
            cout<<a<<" ";
            int c = a + b;
            a = b ;
            b = c ;
        }
    } else {
        cout<<"Enter Valid number.\n";
    }
}