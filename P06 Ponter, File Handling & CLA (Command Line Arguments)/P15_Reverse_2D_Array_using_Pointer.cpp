#include<iostream>

using namespace std;

void input(int * , int , int);
void print(int * , int , int);
void rev(int * , int , int);

int main(){
    int m , n;
    cout<<"Enter size of array M : ";
    cin>>m;
    cout<<"Enter size of array N : ";
    cin>>n;
    int arr[m][n];

    //input
    input(&arr[0][0],m,n);

    //print
    cout<<"Value Which you Enter : " << endl;
    print(&arr[0][0],m,n);

    //rev
    cout<<"Value Which you Enter rev : " << endl;
    rev(&arr[0][0], m , n);
    print(&arr[0][0],m,n);
    
    return 0;
}

void input(int *ptr , int m , int n){
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            cout<<"Enter Value at ["<<i+1<<"] ["<<j+1<<"] : ";
            cin>>*(ptr + i * n + j);
        }
    }
    return;
}

void print(int *ptr , int m , int n){
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            cout<<*(ptr + i * n + j) <<" ";
        }
        cout<<endl;
    }
    return;
}

void rev(int *ptr , int m , int n ){
    int *start = ptr;
    int *end = ptr + ((m*n) - 1);
    while (start < end){
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    return;
}