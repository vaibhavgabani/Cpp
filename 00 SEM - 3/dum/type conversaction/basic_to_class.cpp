#include <iostream>
using namespace std;

class MyNumber {
private:
    int value;

public:
    MyNumber(int v){
        value = v;
    }

    int getValue() const {
        return value;
    }
};

int main() {
    int basicValue = 42;
    MyNumber num(basicValue);
    cout << "The value is: " << num.getValue() << endl;
    return 0;
}
