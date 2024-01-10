#include<iostream>
using namespace std;
 
class Complex{
    public:
    int real ,imag;
    public:
    Complex(){
        real = 0;
        imag =0;

    };
    Complex(int k,int m){
        real = k;
        imag = m;
    }
        Complex operator +(Complex c){
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag ;
        return temp;

    };
    void print(){
        cout<<"The sum of is "<<real<<" +" <<imag<<"i"<<endl;
    }

};
int main(){
    Complex c1(5,6);
    Complex c2(2,3);
    Complex c3;
    c3 = c1 + c2;
    c3. print();

}
