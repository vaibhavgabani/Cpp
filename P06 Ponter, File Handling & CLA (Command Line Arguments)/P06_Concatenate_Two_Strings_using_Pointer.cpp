#include<iostream>

using namespace std;

void strcnt(string * , string *);

int main(){
    string str1 , str2;
    cout<<"Enter 1 String : ";
    cin>>str1;
    cout<<"Enter 2 String : ";
    cin>>str2;

    strcnt(&str1,&str2);

    cout << "Concatenated String: " << str1 << endl;
    
    return 0;
}

void strcnt(string *ptr1 , string *ptr2){
        *ptr1 += *ptr2;
    return;
}