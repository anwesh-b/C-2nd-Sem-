#include<iostream>
using namespace std;

class Test{
    private:
        int x,y;
    public:
        Test(){
            x=0;
            y=0;
        }
        Test opearator =(Test a){
            Test tst;
            cout << "= operator is overloaded";
            tst.x=a.x;
            tst.y=a.y;
            return tst;
        }
};
int main(){
    Test t,t2;
    t=t2;
    return 0;
}