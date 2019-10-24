//WAP for functon overloading

#include<iostream>
using namespace std;

class A {
    public:
        void show(){
            cout << "\nA class ko show without parameter";
        }
        void show(int x) {
            cout << "\nA clas ko show with parameter " << x;
        }
};

int main(){
    A a1;
    a1.show();
    a1.show(2);
    return 0;
}