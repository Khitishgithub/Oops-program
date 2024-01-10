#include<iostream>
using namespace std;
class complex{
    public:
    int real,img;
    complex(){
        real = 0;
        img = 0;

    }
    complex(int x, int y){
        real = x;
        img = y;

    }
    complex addcomplex(complex c1,complex c2){

        complex c3;
        c3.real = c1.real + c2.real;
        c3.img = c1.img + c2.img;
        return c3;
    }

};
int main(){
    complex c1(2,3);
    cout<<"\n  the first complex number"<<c1.real<<"+i"<<c1.img;
    
    complex c2(5,6);
     cout<<"\n  the second complex number"<<c2.real<<"+i"<<c2.img<<endl;
     complex c3;
     c3 = c3.addcomplex(c1,c2);
     cout<<"The sum of two complex no is"<<c3.real<<"+i"<<c3.img;
     return 0;
}

