#include<iostream>

using namespace std;

void input(int * , int );
void print(int * , int );
void rev(int * , int );

int main(){
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    int arr[size];

    //input
    input(arr,size);

    //print
    cout<<"Value Which you Enter : ";
    print(arr,size);

    //reverse
    rev(arr,size);
    cout<<endl<<"Reverse Array : ";
    print(arr,size);
    return 0;
}
void input(int *ptr , int size){
    for(int i = 0 ; i < size ; i++){
        cout<<"Enter Value at ["<<i+1<<"] : ";
        cin>>*(ptr + i);
    }
    return;
}

void print(int *ptr , int size){
    for(int i = 0 ; i < size ; i++){
        cout<<*(ptr + i)<<" ";
    }
    return;
}

void rev(int *ptr, int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        int temp = *(ptr + start);
        *(ptr + start) = *(ptr + end);
        *(ptr + end) = temp;
        start++;
        end--;
    }
}