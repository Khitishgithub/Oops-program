#include<iostream>
using namespace std;
class AC {
    public:
    int marks1;
    int marks2;
    protected:
    int marks3;
    public:
    int avg;
    AC():marks1(100),marks2(90),marks3(80){}
 
    
};
class derived:public AC{
    public:
    void display(){
      cout<<"average:"<<(marks1+marks2+marks3)/3<<endl;
    }
};
int main(){
    derived obj;
   
    obj.display();
    return 0;

}