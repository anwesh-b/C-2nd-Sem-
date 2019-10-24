#include<iostream>
using namespace std;

class Dist{
    private:
        int a,b;
    public:
        Dist(){
            a=0;
            b=0;
        }
        Dist(int x, int y){
            a=x;
            b=y;
        }
        Dist operator+ (Dist m){
            Dist n;
            n.a = a + m.a;
            n.b = b + m.b;
            return n;
        }
        void show(){
            cout << "\na = " << a << "\nb = " << b;
        }
};

int main(){
    Dist d1(8,3);
    Dist d2(5,4);
    Dist n;
    n = d1 + d2;
    n.show();
    return 0;
}