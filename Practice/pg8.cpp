#include<iostream>
using namespace std;
class A {
    public:
    int real ,imag;
    A (){
        real = 0;
        imag = 0;

    };
    A(int m,int n){
        real = m;
        imag =n;


    };
    void add(A a1,A b1){
        real = a1.real + b1.real;
        imag = a1.imag + b1.imag;

    };

    void display(){
        cout<<"The sum is "<<real<<"+"<<imag<<"i"<<endl;
    };
};
int main(){
    A aa(4,5);
    A bb(6,7);
    A cc;
    cc.add(aa,bb);
    cc.display();
    return 0;

}