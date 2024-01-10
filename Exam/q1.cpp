#include<iostream>
using namespace std;
class bank{
    private:
    string name;
    int acc_no;
    string acctype;
    int withraw;
    public:
    int current_balance=56000;
    void getdataaa(){
        cout<<"enter name,account no.,account number and account type:";
        cin>>name>>acc_no>>acctype;

    }
    void display(){
        cout<<name<<endl;
        cout<<acctype<<endl;
        cout<<acc_no<<endl;
        cout<<current_balance<<endl;
    }
    void show(){
        cout<<"enter the amount to be withdraw:";
        cin>>withraw;
        cout<<"the current bal is"<<current_balance-withraw<<endl;
    }

};
int main(){
    bank a[3];
    for(int i=0;i<3;i++){
        a->getdataaa();
        a->display();
        a->show();

    }
    return 0;
}

