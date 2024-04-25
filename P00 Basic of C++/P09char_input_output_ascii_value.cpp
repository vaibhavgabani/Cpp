#include<iostream>
using namespace std;
int main(){
    char c ;
    cout << "Enter Char : ";
    cin >> c;
    int b = c;
    cout<<"You Enter [" << c << "] ACII value is : " << b << endl;
    char z = (char) b;
    cout<<"type casted value of "<< b << " is : "<<z; 
}