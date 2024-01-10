#include<iostream>
using namespace std;
class A{
    public:
    int a;
    A():a(10){}
};
class der:public A {
    
    public:
    void Area(){
        cout<<"Area of cube is :"<<6*a*a<<endl;
    }
    void volume(){
        cout<<"Volume of cube is :"<<a*a*a<<endl;

    }
};
int main(){
    der obj;
    obj.Area();
    obj.volume();
    return 0;
}