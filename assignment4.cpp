//WAP to convert feet into meter.
#include<iostream>
using namespace std;

class Fttom{
    private:
        float ft,m;
    public:
        Fttom(){
            ft = 0;
            m = 0;
        }
        void enter(){
            cout << "\nEnter the value of ft = "<<endl;
            cin >> ft;
        }
        void convert(){
            m = ft * 0.3048;
        }
        void show(){
            cout << "\n" << ft << " ft = " << m <<" meters"; 
        }
};

int main(){
    Fttom f;
    f.enter();
    f.convert();
    f.show();
    return 0;
}