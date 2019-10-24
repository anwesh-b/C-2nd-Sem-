#include<iostream>
using namespace std;
class Parent{
    public:
        int a=5;
};
class Child:public Parent{
    public:
        int a=20,b=10;
};
class Gchild:public Child{
    public:
        void display(){
            cout << "\na = " << a;
            cout << "\na = " << Parent::a;
            cout << "\nb = " << b;
        }
};
int main(){
    Gchild g1;
    g1.display();
}