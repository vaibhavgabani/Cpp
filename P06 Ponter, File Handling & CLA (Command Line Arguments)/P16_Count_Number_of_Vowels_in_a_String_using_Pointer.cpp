#include<iostream>

using namespace std;

int strvowels(char *ptr);

int main(){
    char str[10];
    cout<<"Enter String : ";
    cin>>str;

    cout<<"Total Number of Vowels in string is "<<strvowels(str);

    return 0;
}

int strvowels(char *ptr){
    int vowels = 0;
    for(int i = 0 ; *(ptr + i) != '\0' ; i++){
        if(*(ptr + i) == 'a' || *(ptr + i) == 'A' || *(ptr + i) == 'e' || *(ptr + i) == 'E' || *(ptr + i) == 'i' || *(ptr + i) == 'I' || *(ptr + i) == 'o' || *(ptr + i) == 'O' || *(ptr + i) == 'u' || *(ptr + i) == 'U'){
            vowels++;
        }
    }
    return vowels;
}