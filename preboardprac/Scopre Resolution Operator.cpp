/*

1) It is used to access global variable if local variable has same name
2) It is used in namespace
3) It is used to declare function outside class
4) It is used in multiple inheritance

*/
#include<iostream>
using namespace std;
class Test{
    private:
        int a;
    public:
        Test(){
            a=5;
        }
        void display();
};
void Test::display(){
    cout << a;
}
int main(){
    Test t1;
    t1.display();
}