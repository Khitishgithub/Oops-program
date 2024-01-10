#include<iostream>
using namespace std;

class A {
    int a,b,c;
    float m,n;
    public:
    A(int j){
        a =j;
        cout<<"The arae is :"<< a*a<<endl;
    };
    A(int z,int y){
        a = z;
        b = y;
        cout<<"The arae is :"<<a*b<<endl;


    };

};
int main(){
    A k(5);
    A l (10,4);
    
}
