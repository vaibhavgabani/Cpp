#include<iostream>
using namespace std;

class myclass{
    private:
    int a = 5;

    public:
    //non perameterized constructor
    myclass(){
        cout<<"\nthis is default constrictor"<<endl;
    }

    void getA(){
        cout<<"this is a : "<<a;
    }

    ~myclass(){
        cout<<"\nthis is destructor"<<endl;
    }

};

int main(){
    myclass o1;
    o1.getA(); //destructor execute at the end of main
    return 0;
}