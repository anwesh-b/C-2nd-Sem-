#include<iostream>
using namespace std;

class Address{
    private:
        char charray[20];
    public:
        void revel(){
            int x=10;
            cout <<"\n The address of the object is " << this;
        }
};
int main(){
    Address a[3];
    a[0].revel();
    a[1].revel();
    a[2].revel();
    return 0;
}