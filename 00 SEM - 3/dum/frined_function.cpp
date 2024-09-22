#include <iostream>
using namespace std;

class a {
private:
    int num = 5; 
public:
    friend void display( a A);
};

void display(a A){
    cout<<"Num is : "<<A.num<<endl;
}

int main() {
    a Obj;
    display(Obj);
    return 0;
}
