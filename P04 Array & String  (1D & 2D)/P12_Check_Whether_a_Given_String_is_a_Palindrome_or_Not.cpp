#include<iostream>
using namespace std;
int main(){
    char str[10];
    int len = 0 , flag = 0;
    cout<<"Enter Value of String : ";
    cin>>str;
    
    // get length of 1 and 2 string
    while(str[len] != '\0'){
        len++;
    }

    int i = 0 , j = len - 1;
    while(i<j){
        if(str[i] != str[j]){
            flag = 1;
        }
        i++;
        j--;
    }
    if(flag == 0){
        cout<<"String is Palindrome.";
    } else {
        cout<<"String is not Palindrome.";
    }
    return 0;
}