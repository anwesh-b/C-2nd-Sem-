#include<iostream>
using namespace std;


class Currency{
    private:
        int rs,ps;
    public:
        Currency(){
            rs=0;
            ps=0;
        }
        void show(){
            cout << "\nRs = "<< rs << "\nPs = "<<ps;
        }
        void operator++{
            rs+=1;
            ps+=1;
        }
};
int main(){
    Currency c1;
    c1.show();
}