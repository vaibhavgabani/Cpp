#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    if(num >0){
        for(int i = 0 ; i < num ; i++){
            for(int k = 0 ; k <= i ; k++){
                cout<<"  ";
            }
            for(int j = 0 ; j < num - i ; j++){
                cout<<" *";
            }
            cout<<endl;
        }
    } else {
        cout<<"Enter Positive number..\n";
    }
}