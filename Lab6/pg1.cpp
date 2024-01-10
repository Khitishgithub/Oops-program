#include<iostream>
using namespace std;
class AC {
    private:
    int marks=10;
    protected:
    int age=20;
    public:
    int height=30;
   
     int getdata(){
        return marks;
     }

};
class derived:public AC{
    public:
    int display(){
       return age;
    }
};
int main(){
    derived obj;
    cout<<"age="<<obj.getdata()<<endl;
    cout<<"marks"<<obj.display()<<endl;
    cout<<"height"<<obj.height<<endl;
  
    return 0;

}

