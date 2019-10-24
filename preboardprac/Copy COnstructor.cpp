#include<iostream>
using namespace std;
class Test{
    private:
        int a;
    public:
        Test(){
            cout << "Enter the value of a";
            cin >> a;
        }
        Test(Test &x){
            a=x.a;
        }
        void display(){
            cout << "\na = " << a;
        }
};
int main(){
    Test t1;
    Test t2=t1;
    t1.display();
    t2.display();
}