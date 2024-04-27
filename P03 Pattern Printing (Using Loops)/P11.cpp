#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    if(num >0){
        for(int i = 0 ; i < num ; i++){
            int d = 1;
            for(int k = 0 ; k <= i ; k++){
                cout<<"  ";
            }
            for(int j = 0 ; j < num - i ; j++){
                cout<<" "<<d;
                d++;
            }
            cout<<endl;
        }
    } else {
        cout<<"Enter Positive number..\n";
    }
}