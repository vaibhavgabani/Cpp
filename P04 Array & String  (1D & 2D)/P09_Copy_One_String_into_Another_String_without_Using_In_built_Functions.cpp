#include<iostream>
using namespace std;
int main(){
    string str1 , str2;
    cout<<"Enter Value in 2 String : ";
    getline(cin,str2);
    
    str1 = str1 + str2; //note : this methord will not work in C

    // print 1 string
    cout<<"copy String 2 to string 1 is : "<<str1;

    return 0;
}