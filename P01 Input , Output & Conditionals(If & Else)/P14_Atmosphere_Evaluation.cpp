#include<iostream>
using namespace std;
int main(){
    float fen;
    cout<<"Enter temperature in Fahrenheit : ";
    cin>>fen;
    if(fen >= 40){
        cout<<"temperature is very hot.\n";
    } else if (fen >= 37 && fen < 40){
        cout<<"temperature is hot.\n";
    } else if (fen >= 34 && fen < 37){
        cout<<"temperature is warm.\n";
    } else {
         cout<<"temperature is cool.\n";
    }
}