#include <iostream>
using namespace std;

class a{
public:
    a(){
        cout<<"constructor call object creeated\n";
    }

    ~a(){
        cout<<"distructor call object deleted\n";
    }
};

int main() {
    if(true){
        a A;
    }
    cout<<"End of main\n\n";

    if(true){
        a static A;
    }
    cout<<"End of main\n";
    return 0;
}
