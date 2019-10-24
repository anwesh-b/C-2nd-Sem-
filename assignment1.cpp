//Differentiate between overriding vs overloading.
//overloading
#include<iostream>
using namespace std;

class Mainclass{
    private:
        int x,y;
    public:
        Mainclass(){
            x=0;
            y=0;
        }
        void show(){
            cout << "\nx = " << x << "\ny = " << y;
        }
        void show(int a,int b){
            x=a;
            y=b;
            cout << "\nx = " << x << "\ny = " << y;
        }
};
int main(){
    Mainclass m;
    m.show();
    m.show(3,4);
    m.show();
    return 0;
}