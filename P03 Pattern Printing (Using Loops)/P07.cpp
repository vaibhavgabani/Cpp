#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    if(num >0){
        for(int i = 0 ; i < num ; i++){
            for(int k = 0 ; k <= i ; k++){
                if(k % 2 == 0){
                    cout<<" "<<1;
                } else {
                    cout<<" "<<0;
                }
            }
            cout<<endl;
        }
    } else {
        cout<<"Enter Positive number..\n";
    }
}