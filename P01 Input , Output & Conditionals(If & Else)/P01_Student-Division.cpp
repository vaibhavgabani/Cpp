#include<iostream>
using namespace std;
int main(){
    int sub1 , sub2 , sub3 , sub4 , sub5 , tot;
    cout<<"Enter 1 subject mark : ";
    cin>>sub1;
    cout<<"Enter 2 subject mark : ";
    cin>>sub2;
    cout<<"Enter 3 subject mark : ";
    cin>>sub3;
    cout<<"Enter 4 subject mark : ";
    cin>>sub4;
    cout<<"Enter 5 subject mark : ";
    cin>>sub5;
    tot = sub1 + sub2 + sub3 + sub4 + sub5;  
    float per = (tot * 100) / 500;
    if(per > 60){
        cout<<"First Division\n";
    } else if (per > 50 && per <= 59){
        cout<<"Second Division\n";
    } else if (per > 40 && per <= 49){
        cout<<"Third Division";
    } else {
        cout<<"Fail\n";
    }
}