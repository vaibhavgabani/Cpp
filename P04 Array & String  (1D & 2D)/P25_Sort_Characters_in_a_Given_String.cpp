#include<iostream>
using namespace std;
int main(){
    char str[20];
    cout<<"Enter string value :";
    cin>>str;
    cout<<"Enterd Value is : "<<str;

    //sort
    for(int i = 0 ; str[i] != '\0' ; i++){
        for(int j = 0 ; str[j] != '\0' ; j++){
            if(str[i] < str[j]){
                char temp = str[j];
                str[j] = str[i];
                str[i] = temp;
            }
        }
    }

    //print sort string
    cout<<endl<<"Sorted string is : "<<str;
    return 0;
}