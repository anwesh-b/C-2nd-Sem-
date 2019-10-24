/*
Every object in C++ has access to its own address through an important pointer called this pointer.
This pointer is implicit parameter to all the member functions.
Therefore, inside a member function, this may be used to refer to the invoking object.
Only member function have this pointer. Friend function do not have this pointer.
*/

#include<iostream>
using namespace std;
class Test{
    private:
        int x;
    public:
        Test(int x){
            this->x=x;
        }
        void show(){
            cout << "\nx = " << this->x;
        }
};
int main(){
    Test t(5);
    t.show();
    return 0;
}