#include<iostream>
using namespace std;
class Demo{
    private:
        int num1,num2;
    public:
        Demo(int n1,int n2){
            cout << "Inside constructor : ";
            num1 = n1;
            num2 = n2;
        }
        void display(){
            cout << "num1 = "<< num1 <<endl;
            cout << "num2 = "<< num2 <<endl;
        }
        ~Demo()
        {
            cout << "destroy bhayo :D " <<num1 << num2 << endl;
        }
};
int main(){
    Demo a1(10,20);
    Demo a2(1,2);
    Demo a3(5,6);
    a1.display();
    a2.display();
    a3.display();
    return 0;
}