#include<iostream>
using namespace std;

int main(){
    int a , b , c ;
    cout<<"Enter A : ";
    cin>>a;
    cout<<"Enter B : ";
    cin>>b;

    try{
        if(b != 0 || a != 0){
            c = a / b;
            cout<<"A / B is : "<<c;
        } else {
            throw(b);
        }
    }
    catch(int b){
        cout<<"B is : "<<b;
    }
    catch(int a){
        cout<<"A is : "<<a;
    }

    return 0;
}