#include<iostream>
using namespace std;

class demo{
    int x;
    public:
        demo(){
            x=0;
        }
        demo(int a){
            x=a;
        }
        friend demo opearator -(demo &d){
            x=x-d.x;
            return x;
        }
        void show(){
            cout << endl << "x = " << x << endl;
        }
};

int main(){
    demo d1(2);
    demo d2(1);
    d1.show();
    d1-d2;
    d1.show();
    return 0;
}