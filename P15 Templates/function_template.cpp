#include<iostream>
using namespace std;

template<class T> // single variable type
T sum(T a, T b){
    return a + b;
}

template<class I, class F>  // dual variable types
F sum(I a, F b){  // Here we accept two different types
    return a + b;
}

template<class I, class F, class D>  // three variables of different types
D sum(I a , F b , D c){
    return a + b + c;
}

int main(){
    cout << "Sum is : " << sum(5, 3.6) << endl; // Will call the second template
    cout << "Sum is : " << sum(5, 3.6, 2.4) << endl; // Will call the third template
    return 0;
}
