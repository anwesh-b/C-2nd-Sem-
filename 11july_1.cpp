//WAP for function overriding

#include<iostream>
using namespace std;

class A {
    public:
        void show(){
            cout << "Class A ko show";
        }
};

class B : public A {
    public:
        void show(){
            cout << "Class B ko show";
        }
};

int main(){
    B b1;
    b1.show();
    return 0;
}

