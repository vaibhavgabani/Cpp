#include <iostream>
#include <vector>
using namespace std;

void input(int [], int);
void output(int [], int);
void dup(int [], int);

int main() {
    int size;
    cout << "Enter Size: ";
    cin >> size;
    int arr[size];

    // Input
    input(arr, size);

    // Find Duplicate Element
    dup(arr , size);
    return 0;
}

void input(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter value at [" << i + 1 << "]: ";
        cin >> arr[i];
    }
}

void output(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void dup(int arr[], int size){
    vector<int> temp(size,0);
    // int temp[size];  
    for(int i = 0 ; i < size ; i++){
        if(temp[arr[i]] == 1){
            cout<<"Duplicate Element is : "<<arr[i]<<endl;
            break;
        }
        temp[arr[i]] = 1;
    }
    return;
}