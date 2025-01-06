#include <iostream>
using namespace std;

class a{
public:
    virtual void display(){
        cout<<"Hellow i am A\n";
    }
};

class b : public a{
public:
    void display(){
        cout<<"Hellow i am B\n ";
    }
};

int main() {
    a A;
    b B;
    a *aptr = &B;
    aptr->display();
    return 0;
}
