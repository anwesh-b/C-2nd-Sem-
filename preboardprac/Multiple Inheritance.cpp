#include<iostream>
using namespace std;
class Parent1{
    public:
        int a=5;
};
class Parent2{
    public:
        int b=10;
};
class Child:public Parent1, public Parent2{
    public:
        void display(){
            cout << "\nParent1 value = " << Parent1::a;
            cout << "\nParent2 value = " << Parent2::b;
        }
};
int main(){
    Child c;
    c.display();
}
