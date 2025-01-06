#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter Num : ";
    cin>>num;

    try{
        if(num == 0){
            throw(0);
        } else if(num == 1){
            throw(1.1);
        } else if(num == 2){
            throw('A');
        } else {
            throw(num);
        }
    }
    catch(int num){
        cout<<"num is : "<<num;
    }
    catch(double num){
        cout<<"A is : "<<num;
    }
    catch(char num){
        cout<<"A is : "<<num;
    }
    return 0;
}