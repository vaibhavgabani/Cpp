#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    if(num > 0){
        int sum = 0;
        while(num>0){
            int r = num % 10;
            if(r % 2 != 0){
                sum += r;
            }
            num = num / 10;
        }
        cout<<"SUM of odd digit is : "<<sum;
    } else {
        cout<<"Enter Valid number.\n";
    }
}