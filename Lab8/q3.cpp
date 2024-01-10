#include<iostream>
using namespace std;
class Complex{
    int real,img;
    public:
    Complex(){
        real=0;
        img=0;
    };
    Complex(int x,int y){ 
        real = x;
        img=y;
    }
    void display(){
        cout<<real<<"+i"<<img<<endl;
    }
    friend Complex operator + (Complex,Complex);
};
Complex operator + (Complex c1,Complex c2){
Complex temp;
  temp.real = c1.real + c2.real;
  temp.img = c1.img + c2.img;
  return temp;
};
int main(){
    Complex x(2,4),y(6,8),z;
  
    z= x+y;
    cout<<"sum"<<endl;
    z.display();
    return 0;
    
}