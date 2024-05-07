#include<iostream>
using namespace std;
int main(){
    int num = 5 , sum = 0;
    int arr[num];
    //inut
    for(int i = 0 ; i < num ; i++){
        cout<<"Enter Value at ["<<i+1<<"] :";
        cin>>arr[i];
    }
    
    //print
    cout<<"Value Which you Enter : ";
    for(int i = 0 ; i < num ; i++){
        cout<<arr[i]<<" ";
    }
    
    //reverce
    for(int i = 0 ; i < num ; i++){
        for(int j = 0 ; j < i ; j++){
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }
     //print
    cout<<endl<<"Reverse Array : ";
    for(int i = 0 ; i < num ; i++){
        cout<<arr[i]<<" ";
    }
     
    return 0;
}