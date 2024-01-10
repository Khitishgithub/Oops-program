#include<iostream>
using namespace std;
class A{
    public:
    int base;
    A():base(10){}
};
class B:public A{
    public:
    int height;
    B():height(4){}
};
class C:public B{
    public:
    int radius;
    C():radius(4){}
};
class D:public C{
    public:
    int length;
    int breadth;
    D():length(8),breadth(6){}
  
};
class der:public D{
    
    public:
    void Area(){
        cout<<"Area of triangle :"<<0.5*base*height<<endl;
        cout<<"Area of square :"<<radius*radius<<endl;
        cout<<"Area of rectangle is :"<<length*breadth<<endl;
       
    
}
};
int main(){
    der obj;
    obj.Area();
    return 0;
}