#include<iostream>
using namespace std;
class Parent1{
    public:
        void display(){
            cout << "\nParent1 ko display";
        }
};
class Parent2{
    public:
        void display(){
            cout << "\nParent2 ko display";
        }
};
class Child:public Parent1, public Parent2{
    public:
        void display(){
            Parent1::display();
            Parent2::display();
        }
};
int main(){
    Child c;
    c.display();
}