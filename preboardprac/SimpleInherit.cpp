#include<iostream>
using namespace std;
class Parent{
    public:
        int a=6;    
};
class Child:private Parent{
    public:
        void display(){
            cout << a;
        }
};
int main(){
    Child c1;
    c1.display();
    return 0;
}