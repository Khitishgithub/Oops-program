#include<iostream>
using namespace std;
class Timing{
    public:
    int hr,mn,sc;
    Timing(){
        hr =0;
        mn = 0;
        sc =0;

    }
    Timing(int m,int n,int o){
        hr = m;
        mn = n;
        sc =o;
    }


 friend Timing operator +(Timing, Timing);

 void display(){
    cout<<"The sum is "<<hr <<" "<<mn<<" "<<sc<<endl;
 }

   
};
 Timing operator +(Timing t1,Timing t2){
    Timing t3;
    t3.sc  = (t1.sc + t2.sc)%60;
    t3.mn = t1.mn + t2.mn+(((t1.sc + t2.sc)/60)%60);
    t3.hr = t1.hr+t2.hr+(t1.mn + t2.mn +(t1.sc + t2.sc)/60)/60;
    return t3;
};



int main(){
    Timing t1(10,21,3);
    Timing t2(11,21,3);
    Timing t3;
    t3 = t1 + t2;
    t3.display();
    
    
}

