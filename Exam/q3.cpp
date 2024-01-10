#include<iostream>
using namespace std;
int num;
int count =0;
int main(){
cout<<"Enter a number ";
cin>>num;
while(num>0){
    count++;
    num = num/10;


}
try{
    if(count<4){
        cout<<"You Entered a correct number ";

    }
    else {
        throw(count);

    }
}
catch(int count ){
    cout<<"Your Entered number is more than 3 numbers "<<endl;
    cout<<"Your number of digits is "<<count <<endl;
}

return 0;
}
