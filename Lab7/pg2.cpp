#include<iostream>
using namespace std;
class A {
    public:
    int x;
};
class B :virtual  public A{
    protected:
    int y;

};
class C :virtual public A{
    protected:
    int z;

};
class D : public B  ,public C{
    protected:
    int k;
    public:
    void getdata(){
        cout<<"Enter the value of x,y,z,k :"<<endl;
        cin>>x>>y>>z>>k;
    }
    void display(){
         cout<<"x="<<x<<endl;
        cout<<"y="<<y<<endl;
        cout<<"z="<<z<<endl;
        cout<<"k="<<k<<endl;

    }
};
int main(){
    D d;
    d.getdata();
    d.display();
    return 0;
}


