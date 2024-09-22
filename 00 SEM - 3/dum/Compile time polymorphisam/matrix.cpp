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

    void operator -(){
        for(int i = 0 ; i < 3 ; i++){
            for(int j = 0 ; j < 3 ; j++){
                arr[i][j] = -arr[i][j];
            }
        }
    }

    friend Matrix operator -(Matrix , Matrix);
};

Matrix operator -(Matrix a, Matrix b){
    Matrix tmp;
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            tmp.arr[i][j] = a.arr[i][j] = b.arr[i][j];
        }
    }
    return tmp;
}
int main() {
    Matrix a , b;
    a.input();
    a.display();
    b.input();
    b.display();
    Matrix c = a - b;

    cout<<"sum of matrix is : ";
    c.display();
    -a;
    a.display();
    
    return 0;
}
