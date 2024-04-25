#include<iostream>
using namespace std;
int main(){
    float years, rate , interest;
    cout<<"Enter years :";
    cin>>years;
    cout<<"Enter rate :";
    cin>>rate;
    cout<<"Enter interest :";
    cin>>interest;
    if(years >= 0 && rate >= 0 && interest >= 0){
        float simple_interest = (years * rate * years) / 100;
        cout<<"Simple Interest is : "<<simple_interest;
    } else {
        cout<<"Enter valid data.\n";
    }
}