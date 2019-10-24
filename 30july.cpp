#include<iostream>
using namespace std;

class Test{
    private:
        int x;
    public:
        Test(){
            x=0;
        }
        Test operator ++(){
            x ++;
            Test temp;
            temp.x = x;
            return temp;
        }
        void show(){
            cout << "\nx = " << x;
        }
};
int main(){
    Test t;
    t.show();
    ++t;
    t.show();
}