#include<iostream>
using namespace std;

class Distance{
    private:
        int m,cm;
    public:
        Distance(){
            m=6;
            cm=7;
        }
        void operator --(){
            m--;
            cm--;
        }
        void operator --(int){
            m--;
            cm--;
        }
        void show(){
            cout << "\nm = " << m << "\ncm = " << cm;
        }
};
int main(){
    Distance d;
    d.show();
    d--;
    d.show();
    return 0;
} 