#include<iostream>
using namespace std;


int area(int k){
    return k*k;

};
int area(int l,int m){
    return l*m;
};
int area(float h,int b){
    return 0.5*h*b;
};

int main(){
    cout<<"The area of square is "<<area(5)<<endl;
    cout<<"The area of reactangel is "<<area(10,4)<<endl;
    cout<<"The area of Triangle is "<<area(10,6)<<endl;

    return 0;
    
}