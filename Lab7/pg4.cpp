#include<iostream>
using namespace std;
class A {
    public:
    A(){
        cout<<"\nZero argument constructor of the base class A";
    }
    ~A(){
        cout<<"Destructor is the base class A "<<endl;
    }
};
class B : public A{
    public:
    B(){
        cout<<"\nZero argument constructor of the base class B";

    }
    ~B(){
        cout<<"Destructor is the base class B "<<endl;
    }
}; 
class C : public A,public B{
    public:
    C(){
        cout<<"\nZero argument constructor of the base class C"<<endl;

    }
    ~C(){
        cout<<"Destructor is the base class C "<<endl;;
    }
};
int main(){
    C c;
    return 0;
}
