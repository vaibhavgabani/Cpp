#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    if(num >0){
        for(int i = 1 ; i <= num ; i++){
            int d = 1;
            for(int j = 0 ; j < i ; j++){
                cout<<"  ";
            }
            for(int k = 0 ; k<= num - i ; k++){
                cout<<" "<<d;
                d++;
            }
            d = num - i;
            for(int z = 0 ; z< num - i ; z++){
                cout<<" "<<d;
                d--;
            }
            cout<<endl;
        }
    } else {
        cout<<"Enter Positive number..\n";
    }
}