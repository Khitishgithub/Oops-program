#include<iostream>
using namespace std;
template<class T>

class A {
    public :
    int a;
     A(T a) 
     {
        
        cout<<sizeof( a)<<endl;
    }

};
int main(){
    A<int>aa(5);
    A<char>bb('c');
    return 0;
}
