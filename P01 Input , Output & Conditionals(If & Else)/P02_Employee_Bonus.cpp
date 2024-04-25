#include<iostream>
using namespace std;
int main(){
    float yearofjoin , curryear;
    cout<<"Enter Year of join : ";
    cin>>yearofjoin;
    cout<<"Enter Current year : ";
    cin>>curryear;
    if(yearofjoin <= curryear){
        float time = curryear - yearofjoin;
        cout<<time<<endl;
        if(time >= 7){
            cout<<"Your Bouns is 5000\n";
        } else if (time >= 4 && time <= 6){
            cout<<"Your Bouns is 2000\n";
        } else if (time >= 1 && time <= 3){
            cout<<"Your Bouns is 1000\n";
        } else {
            cout<<"Not eligible for bonus\n";
        }
    } else {
        cout<<"Enter Valid year...\n";
    }
}