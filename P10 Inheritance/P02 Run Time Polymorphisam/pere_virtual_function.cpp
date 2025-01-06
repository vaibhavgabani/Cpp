#include <iostream>
using namespace std;

class a{
public:
    virtual void display() = 0;
};

class b : public a{
public:
    void display(){
        cout<<"Hellow i am B\n";
    }
};

class c : public a{
public:
    void display(){
        cout<<"Hellow i am C\n";
    }
};


int main() {
    b B;
    c C;
    a *aptr = &B;
    aptr->display();
    aptr = &C;
    aptr->display();
    return 0;
}
