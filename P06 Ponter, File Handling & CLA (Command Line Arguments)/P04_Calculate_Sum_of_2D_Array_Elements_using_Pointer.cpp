#include<iostream>

using namespace std;

void input(int * , int , int);
void print(int * , int , int);
int sum(int * , int , int);

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
    cout<<endl<<"Value Which you Enter : " << endl;
    print(&arr[0][0],m,n);

    //sum of 1D 
    cout<<endl<<endl<<"Sum of 1D array is : "<<sum(&arr[0][0],m,n);
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

int sum(int *ptr , int m , int n){
    int sum = 0;
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            sum += *(ptr + i * n + j);
        }
    }
    return sum;
}