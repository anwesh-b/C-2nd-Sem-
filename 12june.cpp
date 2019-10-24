#include<iostream>
using namespace std;
class Student{
    private: 
        char name;
        char address;
    public:
        void getdata(){
            cout << "Enter the name of Student : ";
            cin >> name;
            cout << "Enter the address of student: ";
            cin >> address;
        }
        void putdata(){
            cout << "Name = " << name << "\nAddress = " << address;
        }
};
class Undergraduate: public Student{
    private:
        char faculty[5];
    public:
        void getrecord(){
            Student::getdata();
            cout << "Enter faculty (BBA,BBS,CSIT)";
            cin >> faculty;
        }
        void display(){
            Student::putdata();
            cout << "Faculty" << faculty;
        }
};
class Graduate: public Undergraduate{
    private:
        char thesis[30];
    public:
        void sgetrecord(){
            Undergraduate::getrecord();
            cout << "Enter the thesis subject";
            cin >> thesis;
        }
        void show(){
            Undergraduate::display();
            cout << "Thesis subject " << thesis;
        }
};
int main(){
    Undergraduate u1;
    Graduate g1;
    u1.getrecord();
    u1.display();
    g1.sgetrecord();
    g1.show();
    return 0;
}