#include<iostream>
using namespace std;
int main(){
    int num = 20;
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
    //sort in ascending
    for(int i = 0 ; i < num ; i++){
        for(int j = 0 ; j < num ; j++){
            if(arr[i] < arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    cout<<endl<<"Value in Ascending Order : ";
    for(int i = 0 ; i < num ; i++){
        cout<<arr[i]<<" ";
    }
    //sort in descending 
    for(int i = 0 ; i < num ; i++){
        for(int j = 0 ; j < num ; j++){
            if(arr[i] > arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    cout<<endl<<"Value in Descending Order : ";
    for(int i = 0 ; i < num ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}