#include<iostream>

using namespace std;

void input(int * , int , int);
void print(int * , int , int);
void asort(int * , int , int);
void dsort(int * , int , int);

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

    //sort in Ascending order
    cout<<endl<<"Sort in Ascending Order : "<< endl;
    asort(&arr[0][0],m,n);
    print(&arr[0][0],m,n);
    
    //sort in Descending order
    cout<<endl<<"Sort in Descending Order : "<< endl;
    dsort(&arr[0][0],m,n);
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

void asort(int *ptr , int m , int n){
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            for(int k = 0 ; k < m ; k++){
                for(int z = 0 ; z < n ; z++){
                    if(*(ptr + i * n + j) < *(ptr + k * n + z)){
                        int temp = *(ptr + k * n + z);
                        *(ptr + k * n + z) = *(ptr + i * n + j);
                        *(ptr + i * n + j) = temp;
                    }
                }
            }   
        }
    }
    return;
}


void dsort(int *ptr , int m , int n){
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            for(int k = 0 ; k < m ; k++){
                for(int z = 0 ; z < n ; z++){
                    if(*(ptr + i * n + j) > *(ptr + k * n + z)){
                        int temp = *(ptr + k * n + z);
                        *(ptr + k * n + z) = *(ptr + i * n + j);
                        *(ptr + i * n + j) = temp;
                    }
                }
            }   
        }
    }
    return;
}