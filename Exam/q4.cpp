#include<iostream>
using namespace std;


template<class T>
void show(T a){
    cout<<"Integer"<<endl;
}
template<class T>
void show(T d ,T e){
    cout<<"Chracter"<<endl;
}
template<class T>
void show(T m ,T n, T o ){
    cout<<"Float"<<endl;

}
int main(){
show(1);
show('x','y');
show(1.2,3.5,6.7);
return 0;

}

