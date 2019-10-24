#include<iostream>
using namespace std;
class aplha{
    private:
        int x;
    public:
        void read(){
            cin >> x;
        }
        void print(){
            cout << "\nx = " << x;
        }
};
class beta{
    private:
        int y;
        aplha *a;
    public:
        beta(aplha *p){
            a=p;
        }
};
void main(){
    aplha a1;
    beta b1(&a1);
}