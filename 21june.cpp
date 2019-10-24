//error hunxa ki hudaina check gareko
#include<iostream>
using namespace std;

class bau{
    public:
        void jagga(){
            cout << "bau ko jagga";
        }
};
class ketabaccha:virtual public bau{
    public:
        void jagga(){
            cout << "keta baccha ko jagga";
        }
        // void arkoaalufun(){
        //     cout<<"hawa";
        // }
};
class ketibaccha:virtual public bau{
    public:
        void aalufunction(){
            cout << "\n\n\n\n";
        }
};
class nati2:public ketabaccha{
    public:
        void natikofun(){
            cout << "I am nati";
        }
};
class nati1:public ketibaccha{
    public:
        void natikofun(){
            cout << "I am nati";
        }
};
class panati:public nati1, public nati2{
    public:
        void tori(){
            cout << "Iampanati";
        }
};


int main(){
    panati p1;
    p1.aalufunction();
    p1.jagga();
    return 0;
}
