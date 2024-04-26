#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter Year : ";
    cin>>year;
    if(year > 0){
        if(year % 4 == 0){
            cout<<year<<" is Leap Year.\n";
        } else {
            cout<<year<<" is Leap not Year.\n";
        }
    } else {
        cout<<"Enter valid year...\n";
    }
}