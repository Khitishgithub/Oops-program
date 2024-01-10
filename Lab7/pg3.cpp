#include<iostream>
using namespace std;
class A{
    public:
    char name[50];
    int rollno;

};
class B :public A{
    protected:
    int height;
    int weight;

};
class C{
    protected:
    int cgpa;
};
class D :public C,public B{
    protected:
    int marks;
    public:
    void getdata(){
        cout<<"Enter name:"<<endl;
        cin>>name;
        cout<<"Enter roll no:"<<endl;
        cin>>rollno;
        cout<<"Enter height:"<<endl;
        cin>>height;
        cout<<"Enter weight:"<<endl;
        cin>>weight;
        cout<<"Enter cgpa:"<<endl;
        cin>>cgpa;
        cout<<"Enter marks:"<<endl;
        cin>>marks;
    }
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Roll no :"<<rollno<<endl;
        cout<<"Height:"<<height<<endl;
        cout<<"Weight:"<<weight<<endl;
        cout<<"Cgpa:"<<cgpa<<endl;
        cout<<"Marks:"<<marks<<endl;
    }
};
int main(){
    D d;
    d.getdata();
    d.display();
    return 0;
}