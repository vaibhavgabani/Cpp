#include<iostream>
using namespace std;
class Mat{

    public:
    int *arr , size;
    public:
    Mat(int size){
        this->size = size;
        arr = new int[size];
    }

    void set_arr(){
        for(int i = 0 ; i < size ; i++){
            cout<<"Enter Value at ["<<i+1<<"] : ";
            cin>>arr[i];
        }
    }
    void display(){
        for(int i = 0 ; i < size ; i++){
            cout<<" "<<arr[i];
        }
    }
    
    Mat operator +(Mat m){
        if (size != m.size) {
            cout << "Size mismatch, cannot perform addition." << endl;
            return Mat(0);  // Return an empty Mat object in case of size mismatch
        }
        Mat temp(size);
        for(int i = 0 ; i < size ; i++){
            temp.arr[i] = arr[i] + m.arr[i];
        }
        return temp;
    }
    ~Mat(){
        delete []arr;
    };
};
int main(){
    Mat o1(3),o2(3);
    o1.set_arr();
    o2.set_arr();
    Mat o3 = o1 + o2 ;
    o3.display();
    return 0;
}