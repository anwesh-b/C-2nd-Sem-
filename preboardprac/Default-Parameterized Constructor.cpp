#include<iostream>
using namespace std;
class Test{
    private:
        int a,b;
    public:
        Test(){
            a=0;
            b=0;
        }
        Test(int x, int y){
            a=x;
            b=y;
        }
        void display(){
            cout << "\na = " << a;
            cout << "\nb = " << b;
        }
};
int main(){
    Test t1;
    Test t2(4,5);
    t1.display();
    cout << "\n\n";
    t2.display();
    return 0;
}