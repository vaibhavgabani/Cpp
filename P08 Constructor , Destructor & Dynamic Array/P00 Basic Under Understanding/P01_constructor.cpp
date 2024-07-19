#include<iostream>
using namespace std;

class myclass{
    private:
    int a = 5;

    public:
    //non perameterized constructor
    myclass(){
        cout<<"this is default constrictor"<<endl;
    }

    void getA(){
        cout<<"this is a : "<<a;
    }

};

int main(){
    myclass o1;
    o1.getA();
    return 0;
}