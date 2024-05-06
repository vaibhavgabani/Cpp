#include<iostream>
using namespace std;
int main(){
    string str1 , str2;
    cout<<"Enter Value in 1 String : ";
    cin>>str1;
    cout<<"Enter Value in 2 String : ";
    cin>>str2;
    
    if(str1 == str2){
        cout<<"same";
    } else {
        cout<<"not same";
    }
    return 0;
}