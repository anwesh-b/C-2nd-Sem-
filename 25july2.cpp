#include<iostream>
using namespace std;

class Distance{
    private:
        int m,cm;
    public:
        Distance(){
            m=10;
            cm=6;
        }
        void show(){
            cout << "\nm = " << m << "\ncm = " << cm; 
        }
        void operator ++(){
            m+=4;
            cm+=5;
        }
        void operator ++ (int){
            m+=2;
            cm+=4;
        }
};
int main(){
    Distance d;
    d.show();
    d++;
    d.show();
    ++d;
    d.show();
}