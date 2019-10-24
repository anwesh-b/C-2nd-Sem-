//overriding
#include<iostream>
using namespace std;

class Overridinggarne{
    private:
        int x,y;
    public:
        Overridinggarne(){
            x=10;
            y=0;
        }
        void show(){
            cout << "\nx = " << x << "\ny = " << y;
        }
};

class Overridingbhako{
    public:
    void show(){
        cout << "\nOverriding Successful :D";
    }
};

int main(){
    Overridinggarne o1;
    Overridingbhako o2;
    o1.show();
    o2.show();
    return 0;
}