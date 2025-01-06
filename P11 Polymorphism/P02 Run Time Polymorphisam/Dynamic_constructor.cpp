#include <iostream>

using namespace std;

class Base {
public:
     virtual ~Base() { // Virtual destructor
        cout << "Base destructor called." << endl;
    }
};

class Derived : public Base {
public:
    ~Derived() { // Override the base class destructor
        cout << "Derived destructor called." << endl;
    }
};

int main() {
    Base *ptr = new Derived();
    delete ptr;
    return 0;
}
