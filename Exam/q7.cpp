#include<iostream>
using namespace std;
class Y;
class Distance{
    public:
    int met,cem;
    friend void convert(Y,Distance);
    
    void getdata(){
        cin>>met>>cem;
    }
};

class Y{
    public:
    float feet,inch;
     friend void convert(Y,Distance);
     public:
     void getdata(){
        cin>>feet>>inch;
     }

};

void convert ( Y m,Distance c){
    cout<<"feet ="<<c.met*3.28<<endl;
    cout<<"inch="<<c.cem*0.39<<endl;
  
};
int main(){
    Distance c;
    Y m;
    c.getdata();
    m.getdata();
    convert(m,c);
}