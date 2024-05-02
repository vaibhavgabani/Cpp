#include<iostream>
using namespace std;
int main(){
    int num = 10 , sum = 0;
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
    //sum
    for(int i = 0 ; i < num ; i++){
        sum += arr[i];
    }
    cout<<endl<<"Sum of array is : "<<sum;
     
    return 0;
}