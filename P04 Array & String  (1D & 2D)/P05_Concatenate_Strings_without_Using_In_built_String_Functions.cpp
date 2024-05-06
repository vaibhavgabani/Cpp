#include<iostream>
using namespace std;
int main(){
    string str1 , str2;
    int size = 0;
    cout<<"Enter Value in 1 String : ";
    getline(cin,str1);
    cout<<"Enter Value in 2 String : ";
    getline(cin,str2);
    

    //meargeing 2 string
    //metohrd 1
    str1 = str1 + str2; //note : this methord will not work in C

    // print 1 string
    cout<<"Concatenate String is : "<<str1;

    return 0;
}