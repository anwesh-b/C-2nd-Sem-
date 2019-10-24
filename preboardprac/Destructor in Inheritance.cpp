#include<iostream>
using namespace std;
class Parent1{
    public:
        Parent1(){
            cout << "\nParent1 memory initialized";
        }
        ~Parent1(){
            cout << "\nParent1 memory destroyed";
        }
};
class Parent2{
    public:
        Parent2(){
            cout << "\nParent2 memory initialized";
        }
        ~Parent2(){
            cout << "\nParent2 memory destroyed";
        }
};
class Child:public Parent2,public Parent1{
    public:
        Child(){
            cout << "\nChild memory initialized";
        }
        ~Child(){
            cout << "\nChild memory destroyed";
        }
};
int main(){
    Child c1;
}