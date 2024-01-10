#include<iostream>
using namespace std;
class ABC{
    private:
    int x;
    public:
    ABC(){
        x = 10;
    }
    void display(){
        cout<<"x is ="<<x;
    }
};

   

   

int main(){
    ABC p;
    p.display();

    return 0;
}

   