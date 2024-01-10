#include<iostream>
using namespace std;
class A {
    public:
    string name;
    int age ;
    A(string n ,int a): name(n) ,age(a) {}
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    };
};

int main(){
    A a[2]={
        A("Khitish",10),
        A("Anshuman",20)
    };

    for(int i =0;i<2;i++){
        a[i].display();
    }
}
