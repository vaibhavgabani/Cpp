#include<iostream>

using namespace std;

void input(int * , int );
void print(int * , int );
int sum(int * , int );

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

    //sum of 1D 
    cout<<endl<<endl<<"sum of 1D array is : "<<sum(arr,size);
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

int sum(int *ptr , int size){
    int sum = 0;
    for(int i = 0 ; i < size ; i++){
         sum += *(ptr + i);
    }
    return sum;
}
