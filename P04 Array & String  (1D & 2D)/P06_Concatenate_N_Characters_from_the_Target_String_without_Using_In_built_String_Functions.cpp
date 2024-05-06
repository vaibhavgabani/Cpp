#include<iostream>
using namespace std;
int main(){
    char str1[20] , str2[10];
    int len1 = 0 , len2 = 0 , po , temp = 0;
    cout<<"Enter Value in 1 String : ";
    cin>>str1;
    cout<<"Enter Value in 2 String : ";
    cin>>str2;
    
    // get length of 1 and 2 string
    while(str1[len1] != '\0'){
        len1++;
    }    

    while(str2[len2] != '\0'){
        len2++;
    }

    cout<<"how many char your want to :";
    cin>>po;
    if(po <= len2){
        for(int i = 0 ; i < po ; i++){
            str1[len1 + i] = str2[i];
            temp++;
        }
            str1[len1 + temp] = '\0';
         cout<<"Concatenate String is : "<<str1;
    } else {
        cout<<"Enter valid number.";
    }
    return 0;
}