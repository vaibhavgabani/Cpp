#include<iostream>

using namespace std;

int strlen(char *ptr);
int strpal(char *ptr);

int main(){
    char str[10];
    cout<<"Enter String : ";
    cin>>str;

    if(strpal(str) == 0){
        cout<<"String is Palindrome.";
    } else {
        cout<<"string is not Palindrome.";
    }

    return 0;
}

int strlen(char *ptr){
    int size = 0;
    while(*(ptr+size) != '\0'){
        size++;
    }
    return size;
}

int strpal(char *ptr){
    int flag = 0;
    char *start = ptr;
    char *end = ptr;
    end = end + (strlen(ptr) - 1);
    for(int i = 0 ; i < (strlen(ptr) / 2) ; i++){
        if(*start == *end){
            flag = 0;
        } else {
            flag++;
        }
    }
    return flag;
}