#include <iostream>
using namespace std;

void input(int [], int);
void output(int [], int);
void sortArray(int [], int);
void mergeArrays(int [], int, int [], int, int [], int);

int main() {
    int size1, size2;
    cout << "Enter Size of 1 Array: ";
    cin >> size1;
    cout << "Enter Size of 2 Array: ";
    cin >> size2;
    int size3 = size1 + size2;
    int arr1[size1], arr2[size2], arr3[size3];

    // Input
    // 1 array
    input(arr1, size1);
    // 2 array
    input(arr2, size2);

    // Output
    // 1
    cout << "\nData you entered in 1 Array:\n";
    output(arr1, size1);
    // 2
    cout << "\nData you entered in 2 Array:\n";
    output(arr2, size2);

    // Sort
    // in 1
    sortArray(arr1, size1);
    cout << "\n1 Sorted array: ";
    output(arr1, size1);
    // in 2
    sortArray(arr2, size2);
    cout << "\n2 Sorted array: ";
    output(arr2, size2);

    // Merge two arrays
    cout << "\nMerged Array: ";
    mergeArrays(arr1, size1, arr2, size2, arr3, size3);
    output(arr3, size3);
    
    return 0;
}

void input(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter value at [" << i+1 << "]: ";
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

void sortArray(int arr[], int size) {
    int temp;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    return;
}

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int arr3[], int size3) {
    int z = 0;
    for (int i = 0; i < size1; i++) {
        arr3[z] = arr1[i];
        z++;
    }
    for (int i = 0; i < size2; i++) {
        arr3[z] = arr2[i];
        z++;
    }
    return;
}
