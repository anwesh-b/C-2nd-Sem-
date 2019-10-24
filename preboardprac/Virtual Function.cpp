#include<iostream>
using namespace std;

class one{
    public:
       virtual void show(){
            cout << "Class one show function";
        }
};
class two:public one{
    public:
        void show(){
            cout << "Class two show function";
        }
};
int main(){
    // one obj1;
    two obj2;
    one * p;
    p=&obj2;
    p->show();
    return 0;
}