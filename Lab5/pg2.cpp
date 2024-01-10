#include<iostream>
using namespace std;
class ABC {
    int x,y,z;
    public:
    ABC(int m,int n,int p){
        x = m;
        y = n;
        z = p;

    }
    void sum(){
        cout<<"\n x="<<x<<" "<<"y="<<y<<" "<<"z="<<z<<endl;

    }
};
    int main(){
        ABC p(2,3,4);
        p.sum();
        return 0;
    }

