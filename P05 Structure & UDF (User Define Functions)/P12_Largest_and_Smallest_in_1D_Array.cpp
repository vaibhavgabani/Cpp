#include <iostream>
using namespace std;

void input(int [], int);
void output(int [], int);
int large(int [], int);
int small(int [], int);

int main() {
    int size;
    cout << "Enter Size : ";
    cin >> size;
    int arr[size];
    //input
    input(arr, size);

    int l = large(arr, size);
    cout << "Largest is : " << l << endl;
    int s = small(arr, size);
    cout << "Smallest is : " << s;
    return 0;
}

void input(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter value at [" << i + 1 << "] :";
        cin >> arr[i];
    }
    return;
}

void output(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return;
}

int large(int arr[], int size) {
    int temp = -999999999;
    for (int i = 0; i < size; i++) {
        if (temp < arr[i]) {
            temp = arr[i];
        }
    }
    return temp;
}

int small(int arr[], int size) {
    int temp = 999999999;
    for (int i = 0; i < size; i++) {
        if (temp > arr[i]) {
            temp = arr[i];
        }
    }
    return temp;
}
