//WAP to print area of a triangle using the concept of inhertance
#include<iostream>
using namespace std;

class Border{
    // private:
    //     int b;
    protected:
        int h,b;
    public:
        Border(){
            cout << "Enter the base of triangle = ";
            cin >> b;
        }
};

class Triangle:public Border{
    private:
        int area;
    public:
        void riangle(){
            // cout << "Enter the height";
            // cin >> h;
            // area = h * b * 0.5;
        }
        void outp(){
            cout << "Area = " <<area;
        }
};

int main(){
    Border b1;
    int t;
    cout << "Enter the no of triangle";
    cin >> t;
    Triangle tri[t];
    for(int i=0;i<t;i++)
        tri[i].riangle();
    for(int i=0;i<t;i++)
        tri[i].outp();    
    return 0;
}
