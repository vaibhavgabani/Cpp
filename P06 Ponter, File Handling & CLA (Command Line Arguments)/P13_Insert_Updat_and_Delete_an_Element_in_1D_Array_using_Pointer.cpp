#include<iostream>

using namespace std;

void input(int * , int );
void print(int * , int );
void delet(int * , int * , int );
void insert(int * , int * , int );

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

    //insert
    int po1;
    cout<<endl<<"enter position for insert Value :";
    cin>>po1;
    if(po1 > size || po1 < 0){
        cout<<"Enter valid position";
    } else {
        insert(arr,&size,po1);
        print(arr,size);    
    }

    //delete
    int po;
    cout<<endl<<"enter position for delete :";
    cin>>po;
    if(po > size || po < 0){
        printf("Enter valid position");
    } else {
        delet(arr,&size,po);
        print(arr,size);    
    }
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

void delet(int *ptr , int *size , int po){
    for(int i = po - 1; i < *size - 1 ; i++){
        *(ptr + i) = *(ptr + i + 1);
    }
    *size = *size - 1;
    return;
}

void insert(int *ptr, int *size, int po) {
    int n;
    cout << "Enter value: ";
    cin >> n;

    for (int i = *size ; i > po - 1; i--) {
        *(ptr + i) = *(ptr + i - 1);
    }

    *(ptr + po - 1) = n;
    *size = *size + 1;
}