#include<iostream>
using namespace std;

class A{
    public:
        virtual void show()=0;
};

class B:public A{
    public:
        void show(){
            cout<<"\nB class";
        }
};

class C:public A{
    public:
        void show(){
            cout<<"\nC Class";
        }
};

int main(){
    A *ptr[3];
    B b1;
    C c1;
    ptr[1]=&b1;
    ptr[2]=&c1;
    // ptr[0]->show();
    ptr[1]->show();
    ptr[2]->show();
    return 0;
}