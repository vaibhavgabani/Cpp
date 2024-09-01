// overloading + operator 
#include<iostream>
using namespace std;
class Mat{
    public:
    int a , b ;
    public:
    Mat(int a , int b){
        this->a = a;
        this->b = b; 
    }
    int get_a(){
        return a;
    }
    int get_b(){
        return b;
    }
    void display(){
        cout<<"A is : "<<a<<" B is : "<<b<<endl;
    }
    Mat operator +(Mat m){
        int A = this->a + m.get_a();
        int B = this->b + m.get_b();
        Mat ans(A,B);
        return ans;
    }
    Mat operator -(Mat m){
        int A = this->a - m.get_a();
        int B = this->b - m.get_b();
        Mat ans(A,B);
        return ans;
    }
    Mat operator *(Mat m){
        int A = this->a * m.get_a();
        int B = this->b * m.get_b();
        Mat ans(A,B);
        return ans;
    }
    Mat operator /(Mat m){
        int A = this->a / m.get_a();
        int B = this->b / m.get_b();
        Mat ans(A,B);
        return ans;
    }
};
int main(){
    Mat o1(2,3) , o2(2,3);
    // Mat o3 = o1.sum(o2);
    Mat o3 = o1 + o2;
    o1.display();
    // cout<<sizeof(o1);
    return 0;
}