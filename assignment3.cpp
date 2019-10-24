//Explain the inline function with example.
#include<iostream>
using namespace std;

class Addclass{
    private:
        int a,b,res;
    public:
        Addclass(){
            a = 0;
            b = 0;
            res = a + b;
        }
        void get();
        void sum();
        void show();
};

inline void Addclass :: get(){
    cout << "\nEnter the value of first variable : ";
    cin >> a;
    cout << "\nEnter the value of second variable : ";
    cin >> b;
}

inline void Addclass :: sum(){
    res = a+b;
}

inline void Addclass :: show(){
    cout << "\nsum = " << res;
}

int main(){
    Addclass a;
    a.get();
    a.sum();
    a.show();
}