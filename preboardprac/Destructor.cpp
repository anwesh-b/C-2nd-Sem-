#include<iostream>
using namespace std;
class Test{
    public:
        Test(){
            cout << "\nConstructor called";
        }
        ~Test(){
            cout << "\nDestructor called";
        }
};
int main(){
    Test t1;
    Test t2;
    Test t3;
    return 0;
}