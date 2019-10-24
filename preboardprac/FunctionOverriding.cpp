#include<iostream>
using namespace std;
class Parent{
    public:
        void display(){
            cout << "This is original function";
        }
};
class Child:public Parent{
    public:
        void display(){
            cout << "This is overridden function";
        }
};
int main(){
    Child c;
    c.display();
}
