#include<iostream>
using namespace std;
class Complex{
    int real;
    int imag;
    public:
    Complex(){
        real = 10;
        imag = 20;
    }
    Complex(int j,int k){
        real =j;
        imag = k;
    }

    void display(){
        cout<<real<<"+i"<<imag<<endl;
    }
    Complex operator +(Complex obj){
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

};
int main(){
    Complex x(2,3),y(4,5),c;
   
    x.display();
 
    y.display();
    c = x + y;
    cout<<"\nc"<<endl;
    c.display();
    return 0;
}