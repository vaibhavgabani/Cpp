#include <iostream>
using namespace std;

class a{
public:
    int a1;
    a(){
        a1 = 0;
    }
    operator int(){
        return a1;
    }
};

class b{
public:
int b1;
    b(){
        b1 = 0; 
    }

    b(a AA){
        b1 = AA.a1;
    }

};

int main() {
    a box1;
    box1.a1 = 5;
    b box2;
    box2 = box1;

    cout<<box2.b1;
    return 0;
}
