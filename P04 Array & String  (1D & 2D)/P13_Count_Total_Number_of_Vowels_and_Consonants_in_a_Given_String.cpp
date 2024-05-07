#include<iostream>
using namespace std;
int main(){
    char str[10];
    int len = 0 , vowels = 0 , consonants = 0;
    cout<<"Enter Value of String : ";
    cin>>str;
    
    for(int i = 0 ; str[i] != '\0' ; i++){
        if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U'){
            vowels++;
        } else {
            consonants++;
        }
    }

    cout<<"there are ["<< vowels <<"] vowels & ["<< consonants <<"] Consonants in "<<str<<".";
    return 0;
}