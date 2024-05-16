#include<iostream>

using namespace std;

void input(int * , int );
void print(int * , int );
int armstrong(int *);
void armstrong1d(int * , int );

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

    //check amstrong
    armstrong1d(arr,size);
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


int armstrong(int *n) {
    int numDigits = 0;
    int temp = *n;
    int sum = 0;

    while (temp != 0) {
        temp /= 10;
        numDigits++;
    }

    temp = *n;

    while (temp != 0) {
        int digit = temp % 10;
        int pow = 1;
        for (int i = 0; i < numDigits; i++) {
            pow *= digit;
        }
        sum += pow;
        temp /= 10;
    }

    if (sum == *n) {
        return 1;
    } else {
        return 0;
    }
}

void armstrong1d(int *ptr , int size){
    for(int i = 0 ; i < size ; i++){
        if(armstrong((ptr + i)) == 1){
            cout<<endl<<*(ptr + i)<<" is Amstrong number.";
        }
    }
    return;
}