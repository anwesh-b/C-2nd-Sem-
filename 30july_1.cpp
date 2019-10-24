#include<iostream>
using namespace std;

class Test{
    public:
        int x;
        Test(){
            x = 0;
        }
        // Test(int a){
        //     x=a;
        // }
        void show(){
            cout << "\nx = " << x;
        }
        Test operator ++(){
            x++;
            return Test(x);
        }
};

int main(){
    Test t,t2;
    t.show();
    t2.x = ++t;
    t2.show();
    return 0;
}