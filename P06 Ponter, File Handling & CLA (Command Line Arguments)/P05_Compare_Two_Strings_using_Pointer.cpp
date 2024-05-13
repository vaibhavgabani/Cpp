#include<iostream>

using namespace std;

int strlen(char *ptr);
int strcmp(char *ptr1 , char *ptr2);

int main(){
    char str1[10] , str2[10];
    cout<<"Enter 1 String : ";
    cin>>str1;
    cout<<"Enter 2 String : ";
    cin>>str2;

    //comparing string
    if(strcmp(str1,str2) == 0){
        cout<<"Both string are same.";   
    } else {
        cout<<"BOth string are not same.";
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

int strcmp(char *ptr1 , char *ptr2){
    int flag = 0;
    int size1 = strlen(ptr1);
    int size2 = strlen(ptr2);

    if(size1 != size2){
        flag = 1;
    } else {
        for(int i = 0 ; i < size1 ; i++){
            if(*(ptr1 + i) != *(ptr2 + i)){
                flag = 1;
                break;
            }
        }
    }
    return flag;
}