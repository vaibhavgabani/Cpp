// operator overloading uing friend function

#include<iostream>
using namespace std;
class Box{
    int x , y;
public:
    Box(int x , int y){
        this->x = x;
        this->y = y;
    }

    friend Box operator +(Box , Box);
    
    void display(){
        cout << " x is : "<<x<<"Y is : "<<y<<endl;
    }

    int get_x(){return x;}
    int get_y(){return y;}
};

Box operator +(Box b1 , Box b2){
    return Box((b1.get_x() + b2.get_x()),(b1.get_y() + b2.get_y()));
}

int main(){
    Box b1(2,2) , b2(2,2);
    Box b3 = b1 + b2;
    b3.display();
    return 0;
}