#include<iostream>
using namespace std;

class bau {
    private:
        int x=5,y=10;
    protected:
        void dispx(){
            cout << "\nx = " << x;
        }
    public:
        void dispy(){
            cout << "\ny = " << y;
        }
};

class aama {
    private:
        int a=3, b=6;
    protected:
        void dispa(){
            cout << "\na = " << a;
        }
    public:
        void dispb(){
            cout << "\nb = " << b;
        }
};

class kaka {
    private:
        int m=7,n=14;
    protected:
        void dispm(){
            cout << "\nm = " << m;
        }
    public:
        void dispn(){
            cout << "\nn = " << n;
        }
};

class baccha:public bau, public aama, protected kaka{
    public:
        void lathikxa(){
            cout << "okk :v ";
        }
};

int main(){
    baccha b1;
    b1.dispb();
    // b1.dispn();
    b1.dispy();
    // b1.dispa();
    // b1.dispm();
    // b1.dispx();
}