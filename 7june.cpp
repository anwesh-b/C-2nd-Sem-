#include<iostream>
using namespace std;
class Parent
{
    public:
        int income;
};          //end of parent class Parent
class child: public Parent{
   private:
       int bill_amount;
   public:
       void get()
       {
           cout << "Enter income";
           cin >> income;
           cout << "Enter bill amount";
          cin >> bill_amount;
           }
       void show()
       {
           cout<<"Income = " << income;
           cout << "Bill amount = " << bill_amount;
       }
};          //end of child class
int main(){
    child c1,c2;
    c1.get();
    c1.show();
    c2.get();
    c2.show();
    return 0;
}