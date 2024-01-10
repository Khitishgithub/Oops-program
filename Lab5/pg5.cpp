#include<iostream>
using namespace std;
class A {
    int x,y,z,p;
    public:
    A(int s,int t)
{
    x = s;
    y =t;
    cout<<"The value of x and y is "<<x<<" "<<y<<endl;;
}
A( A &ref){
    z = ref.x;
    p = ref.y;
    cout<<"The value of z and p is "<<z<<" "<<p;

}
};
int main(){
    A a1(10,20);
    A a2 = a1;
    return 0;
}