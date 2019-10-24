#include<iostream>
using namespace std;
class complex
{
    private:
        int real,imag;
    public:
        complex(){
            real = 0;
            imag = 0;
        }
        complex(int a,int b){
            real = a;
            imag = b;
        }
        void getdata(){
            cout << "Real and imaginary value";
            cin >> real >> imag;
        }
        void processing(complex a,complex b){
            real = b.real + a.real;
            imag = b.imag + a.imag;
        }
        void disp(){
            cout << "real" << real;
            cout << "\nimag" << imag;
        }
};
int main(){
    complex c1(10,20);
    complex c2,c3;
    c2.getdata();
    c3.processing(c1,c2);
    c3.disp();
}