#include<iostream>

using namespace std;

void input(int * , int );
void print(int * , int );
void asort(int * , int );
void dsort(int * , int );

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

    //sort in Ascending order
    cout<<endl<<"Sort in Ascending Order : ";
    asort(arr,size);
    print(arr,size);
    
    //sort in Descending order
    cout<<endl<<"Sort in Descending Order : ";
    dsort(arr,size);
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

void asort(int *ptr , int size){
    for(int i = 0 ; i < size ; i++){
        for(int j = 0 ; j < size ; j++){
            if(*(ptr + i) < *(ptr + j)){
                int temp = *(ptr + j);
                *(ptr + j) = *(ptr + i);
                *(ptr + i) = temp;
            }
        }
    }
    return;
}

void dsort(int *ptr , int size){
    for(int i = 0 ; i < size ; i++){
        for(int j = 0 ; j < size ; j++){
            if(*(ptr + i) > *(ptr + j)){
                int temp = *(ptr + j);
                *(ptr + j) = *(ptr + i);
                *(ptr + i) = temp;
            }
        }
    }
    return;
}