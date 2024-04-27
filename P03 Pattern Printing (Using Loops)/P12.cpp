#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    if(num >0){
        int a = num * 2 - 1;
        for(int i = 0 ; i < num ; i++){
            int d = 1;
            for(int j = 0 ; j < a ; j++){
                cout<<" "<<d;
                d++;
            }
            a = a - 2;
            cout<<endl;
        }
    } else {
        cout<<"Enter Positive number..\n";
    }
}