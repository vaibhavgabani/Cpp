#include<iostream>

using namespace std;

void input(int * , int , int);
void print(int * , int , int);
int check(int , int , int , int );
void add(int *, int *, int * , int , int );
void sub(int *, int *, int * , int , int );
void mul(int *, int *, int * , int , int , int);
void trans(int *, int , int );

int main(){
    int m1, n1, m2, n2;
    // Input of array size
    
    // 1st array
    cout << "\nEnter size of 1st array:\n";
    cout << "Enter 1st array M: ";
    cin >> m1;
    cout << "Enter 1st array N: ";
    cin >> n1;
    
    // 2nd array
    cout << "\nEnter size of 2nd array:\n";
    cout << "Enter 2nd array M: ";
    cin >> m2;
    cout << "Enter 2nd array N: ";
    cin >> n2;

    int arr1[m1][n1] , arr2[m2][n2]; 

    //input
    cout<<"Enter in 1 array : \n";
    input(&arr1[0][0],m1,n1);
    cout<<"Enter in 2 array : \n";
    input(&arr2[0][0],m2,n2);

    //print
    cout<<"Value Which you Enter in 1 array: " << endl;
    print(&arr1[0][0],m1,n1);
    cout<<"Value Which you Enter in 2 array: " << endl;
    print(&arr2[0][0],m2,n2);

    //add
    if(check(m1 , n1 , m2 , n2) == 1){
        int result[m1][n1];
        add(&arr1[0][0], &arr2[0][0], &result[0][0], m2, n2 );
        cout<<"\nAddaction is : \n";
        print(&result[0][0], m1, n1);
    } else {
        cout<<"addaction is not possible.\n";
    }

    //sub
    if(check(m1 , n1 , m2 , n2) == 1){
        int result[m1][n1];
        sub(&arr1[0][0], &arr2[0][0], &result[0][0], m2, n2 );
        cout<<"\nSubstraction is : \n";
        print(&result[0][0], m1, n1);
    } else {
        cout<<"Substraction is not possible.\n";
    }

    // mul
    if(n1 == m2){
        int result[m1][n2];
        mul(&arr1[0][0] , &arr2[0][0] , &result[0][0], m1 , n1 , n2);
        cout<<"\n Multplaction is : \n";
        print(&result[0][0], m1, n2);
    } else {
        cout<<"Multplaction is not possible.\n";
    }

    //transpose
    cout<<"transpose of First matrix : \n";
    trans(&arr1[0][0], m1, n1);
    cout<<"transpose of Second matrix : \n";
    trans(&arr2[0][0], m2, n2);
    
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

int check(int m1, int n1, int m2, int n2){
    int cnt = 0;
    if(m1 == m2 && n1 == n2){
        return 1;
    }
    return cnt;
}

void add(int *ptr1, int *ptr2, int *p, int m1 , int n1){
    for(int i = 0 ; i < m1 ; i++){
        for(int j = 0 ; j < n1 ; j++){
            *(p + i * n1 + j) = *(ptr1 + i * n1 + j) + *(ptr2 + i * n1 + j);
        }
    }
}

void sub(int *ptr1, int *ptr2, int *p, int m1 , int n1){
    for(int i = 0 ; i < m1 ; i++){
        for(int j = 0 ; j < n1 ; j++){
            *(p + i * n1 + j) = *(ptr1 + i * n1 + j) - *(ptr2 + i * n1 + j);
        }
    }
}

void mul(int *ptr1, int *ptr2, int *p, int m1, int n1 ,int n2){
     // Initialize result matrix to zeros
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            *(p + i * n2 + j) = 0;
        }
    }
     for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            for (int k = 0; k < n2; k++) {
                *(p + i * n2 + k) += *(ptr1 + i * n1 + j) * *(ptr2 + j * n2 + k);
            }
        }
    }
    return;
}

void trans(int *ptr, int m, int n){
    for(int j = 0 ; j < n ; j++){
        for(int i = 0 ; i < m ; i++){
            printf("%d ",*(ptr + i * n + j));
        }
        printf("\n");
    }
    return;
}