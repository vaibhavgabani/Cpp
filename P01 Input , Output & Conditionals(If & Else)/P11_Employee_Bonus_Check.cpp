#include<iostream>
using namespace std;
int main(){
    int current_year , joing_year ;
    cout<<"Enter your Joing Year  :";
    cin>>joing_year;
    cout<<"Enter your Current Year  :";
    cin>>current_year;
    if(joing_year < current_year){
        int  yos = current_year - joing_year;
        if(yos > 3){
            cout<<"Your Bonus is : 5000\n";
        } else {
            cout<<"your bonus is : 0\n";
        }
    } else {
        cout<<"Enter valid data...\n";
    }
    
}