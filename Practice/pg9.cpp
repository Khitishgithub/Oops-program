#include<iostream>
using namespace std;
class A {
    public:
    int k;
    A(int x){
        k = x;

    }
    void display(){
        cout<<"k="<<k<<endl;
    };

void operator ++(int){
    k++;
    cout<<"Postfix"<<endl;


}
void operator ++(){
    ++k;
    cout<<"Prefix"<<endl;


};
};

int main(){
    A p(2);
    p.display();
   ++p;

    p.display();
     
    return 0;


}

