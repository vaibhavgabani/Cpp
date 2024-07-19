#include<iostream>
using namespace std;

class myclass{
private:
    int size;
    int *arr;
public:
    
    void set_arr(){
        cout<<"Enter size  :";
        cin>>size;
        arr = new int[size];
        for(int i = 0 ; i < size ; i++){
            cout<<"Enter value at "<<(i+1)<<" : ";
            cin>>arr[i];
        }
    }

    void print_arr(){
        for(int i = 0 ; i < size ; i++){
            cout<<" "<<arr[i];
        }
    }

    ~myclass(){
     delete arr;   
    }
};


int main(){
    myclass o1;
    o1.set_arr();
    o1.print_arr();
    return 0;
}