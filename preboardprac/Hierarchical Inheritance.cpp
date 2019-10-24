#include<iostream>
using namespace std;
class Parent{
    public:
        int a=5;
};
class Child:public Parent{
    public:
        void display(){
            cout << "\na = " << a;
            }
};
class Child2:public Child{
    public:
        void display(){
            cout << "\na = " << a;
            }
};
int main(){
    Child c1;
    Child2 c2;
    c1.display();
    c2.display();
}