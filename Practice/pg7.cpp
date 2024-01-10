#include<iostream>
using namespace std;

class A {
    public:
    int a,b,c;
    A(){
        a =0;
        b=0;
        c=0;

    };
    A(int m,int n,int p){
        a = m;
        b =n;
        c =p;

    } 
  
         A operator *(A d){
       A temp;
        temp.a = a * d.a;
        temp.b =b * d.b ;
        temp.c = c * d.c;

        return temp;

    };
    void print(){
        cout<<"The multiplication is "<<a*b*c<<endl;

    };
};

int main(){
    A aa(1,1,1);
    A bb(1,1,1);
    A cc (4,6,7);
    A dd;
    dd = aa * bb * cc;
    dd.print();

}