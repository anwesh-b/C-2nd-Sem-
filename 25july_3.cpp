#include<iostream>
using namespace std;

class Main{
    private:
        int a=0,b=0;
        friend class Student;
    public:
        void show(){
            cout << "\na = " << a << "\nb = " << b;
        }
}

class Student{
    public:
        void show(){
            cout << "\na = " << a << "\nb = " << b;
        }
}

int main(){
    Main m;
    Student s;
    m.show();
    s.show();
}