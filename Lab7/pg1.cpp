
#include<iostream>
using namespace std;
class A{
   protected:
    int base;
    
};
class B: virtual public A{
    protected:
    int height,a,b;
   
};
class C:virtual public A{
    protected:
    int radius;
};
   
class D:public C, public B{
   protected:
   int length,breadth;
   public:

    
    
    void getdata(){
        cout<<"\nEnter the value of height ,base:"<<endl;
        cin>>height>>base;
        cout<<"Enter the value of height,a,b:"<<endl;
        cin>>height>>a>>b;
        cout<<"Enter the value of radius"<<endl;
        cin>>radius;
        cout<<"Enter the length and breadth"<<endl;
        cin>>length>>breadth;
       
    
}
void display(){
    cout<<"Area of triangle="<<0.5*height*base<<endl;
    cout<<"Area of trapizium="<<0.5*height*(a+b)<<endl;
    cout<<"Area of sqare="<<3.14*radius*radius<<endl;
    cout<<"Area of rectangle="<<length*breadth<<endl;
}
};
int main(){
    D obj;
    obj.getdata();
    obj.display();
    return 0;
}