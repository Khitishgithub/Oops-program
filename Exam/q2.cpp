#include<iostream>
using namespace std;

class Vehicle{
    public:
    string brand;
    string clr;
    static string newclr;
    int wt;
    int maxspeed,milege;

    void getdata(){
        cout<<"Enter all"<<endl;
        cin>>brand;
        cin>>clr;
        cin>>wt;
        cin>>maxspeed;
        cin>>milege;


    }
    void display(){
        cout<<brand;
        cout<<clr;
        cout<<wt;
        cout<<maxspeed;
    cout<<milege;

    }
    static void show (){
        cout<<"Enter the new color";
        cin>>newclr;
        cout<<newclr;
    }


};
string Vehicle::newclr="Orange";

int main(){
    Vehicle aa[3];
    for(int i=0;i<3;i++){
        aa->getdata();
        aa->display();
        aa->show();
    }
    return 0;

}

