#include<iostream>
using namespace std;
class X{
    public:
     void show(){
    cout<<"Base class"<<endl;
    }

};
class Y :public X {
    public:
    void show(){
        cout<<"Derived class"<<endl;
    }
};
int main(){
    X *ptr;
    // X obj1;
    // Y obj2;
    // Y *ptr2;
    // ptr2= &obj2;
    // ptr2->show();
    X obj1 ;
    Y obj2;
    ptr= &obj2;
    ptr->show();

    return 0;

}