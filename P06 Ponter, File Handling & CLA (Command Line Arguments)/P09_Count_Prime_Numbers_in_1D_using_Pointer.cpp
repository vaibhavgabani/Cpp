#include<iostream>

using namespace std;

void input(int * , int );
void print(int * , int );
int prime(int *);
void prime1d(int *,int );

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

    //prime
    prime1d(arr,size);
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

int prime(int *n) {
    int cnt = 0;
    for (int i = 1; i <= *n; i++) {
        if (*n % i == 0) {
            cnt++;
        }
    }
    if (cnt == 2) {
        return 1;
    } else {
        return 0;
    }
}

void prime1d(int *ptr,int size){
    int cnt = 0;
    for(int i = 0 ; i < size ; i++){
        cnt = prime((ptr + i));
        if(cnt == 1){
            cout<<endl<<*(ptr+i)<<" is prime number.";
        }
    }
    return;
}