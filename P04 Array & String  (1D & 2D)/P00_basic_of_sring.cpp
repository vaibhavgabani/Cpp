#include<iostream>
using namespace std;
int main(){
    // Methord 1 of String input & output
    char str1[20];
    cout<<endl<<"Methord 1 of String input & output using char str1[20]"<<endl<<"Enter your name : ";
    cin>>str1;
    cout<<"your name is : "<<str1;
    cout<<endl<<"size sizeof(str1) = "<<sizeof(str1);
    
    // Methord 2 of String input & output
    string str2;
    cout<<endl<<endl<<"Methord 1 of String input & output using string str2"<<endl<<"Enter your name : ";
    cin>>str2;
    cout<<"your name is : "<<str2;
    cout<<endl<<"sizeof(str2) = "<<sizeof(str2);

    //note : upper 2 methord will not take space as input
    //methord 3
    string str3;
    cout<<endl<<endl<<"Methord 3 of String input & output using string str3 with space"<<endl<<"Enter your name : ";
    getline(cin,str3);
    cout<<"your name is : "<<str3;
    cout<<endl<<"sizeof(str2) = "<<sizeof(str3);
    return 0;
}