#include<iostream>

using namespace std;

void strcpy(string * , string *);

int main(){
    string str1 , str2;
    cout<<"Enter String : ";
    cin>>str2;

    strcpy(&str1,&str2);

    cout << "Copy String: " << str1 << endl;
    
    return 0;
}

void strcpy(string *ptr1 , string *ptr2){
        *ptr1 = *ptr2;
    return;
}