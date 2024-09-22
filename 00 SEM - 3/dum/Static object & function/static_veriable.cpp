#include <iostream>
using namespace std;

void display(){
    static int a = 0;
    cout<<"a is : "<<a<<endl;
    a++;
}

int main() {
    display();
    display();
    display();
    return 0;
}
