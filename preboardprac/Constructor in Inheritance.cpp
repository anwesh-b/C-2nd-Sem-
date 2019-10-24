#include<iostream>
using namespace std;
class Parent{
    public:
        Parent(){
            cout << "\nParent memory initialized";
        }
};
class Child:public Parent{
    public:
        Child(){
            cout << "\nChild memory initialized";
        }
};
int main(){
    Child c1;
}