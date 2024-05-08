#include <iostream>
using namespace std;

void input(int [], int);
void output(int [], int);
void sorta(int [], int);
void sortd(int [], int);

int main() {
    int size;
    cout << "Enter Size: ";
    cin >> size;
    int arr[size];

    // Input
    input(arr, size);

    // Sorting in ascending order
    sorta(arr, size);
    cout << "Sorting in ascending order: ";
    output(arr, size);

    // Sorting in descending order
    sortd(arr, size);
    cout << "Sorting in descending order: ";
    output(arr, size);

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

void sorta(int arr[], int size) {
    int temp;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

void sortd(int arr[], int size) {
    int temp;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}
