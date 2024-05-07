#include<iostream>
using namespace std;
int main(){
    char str1[10] , str2[10];
    int len = 0 , po , dum = 0;
    cout<<"Enter Value in 2 String : ";
    cin>>str2;
    
    // get length of 1 and 2 string
    while(str2[len] != '\0'){
        len++;
    }

    cout<<"how many char your want to copy :";
    cin>>po;
    if(po <= len){
        for(int i = 0 ; i < po ; i++){
            str1[i] = str2[i];
            dum++;
        }
        str1[dum] = '\0';
        cout<<"Cpy string 1 is "<<str1;
    } else {
        cout<<"Enter valid number.";
    }
    return 0;
}