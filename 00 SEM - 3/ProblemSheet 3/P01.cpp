/*
 * P01.cpp
 *
 *  Created on: 03-Oct-2024
 *      Author: root
 */

#include <iostream>
using namespace std;

class Matrix {
public:
    int arr[3][3], tmp = 5;

    void input() {
        cout << "Enter the elements of the 3x3 matrix:\n";
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                cout << "Element [" << i << "][" << j << "]: ";
                cin >> arr[i][j];
            }
        }
    }

    void display() {
        cout << "The 3x3 matrix is:\n";
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix operator +(Matrix m){
        Matrix temp;
        for(int i = 0 ; i < 3 ; i++){
            for(int j = 0 ; j < 3 ; j++){
                temp.arr[i][j] = arr[i][j] + m.arr[i][j];
            }
        }
        return temp;
    }

};


int main() {
    Matrix a , b;
    a.input();
    a.display();
    b.input();
    b.display();
    Matrix c = a + b;

    cout<<"sum of matrix is : ";
    c.display();

    return 0;
}


