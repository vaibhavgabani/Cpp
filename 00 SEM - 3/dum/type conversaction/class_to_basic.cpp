#include <iostream>
using namespace std;

class MyNumber {
private:
    int value;

public:
    MyNumber(int v) {
        value = v;
    }

    // Conversion operator to int
    operator int() {
        return value;
    }
};

int main() {
    MyNumber num(42);
    int basicValue = num;
    cout << "The value is: " << basicValue << endl;
    return 0;
}
