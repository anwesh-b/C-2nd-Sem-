//WAP for constructor overloading

#include<iostream>
using namespace std;

class A{
    public:
        A(){
            cout << "\nA ko constructor";
        };
        A(int x){
            cout << "\nA ko consructor with parameter " << x;
        }
};

int main(){
    A a1;
    A a2(5);
}