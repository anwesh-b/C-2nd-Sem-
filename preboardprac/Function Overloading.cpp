#include<iostream>
using namespace std;
class Test{
    public:
        void print(){
            cout << "Withut arguement";
        }
        void print(int a){
            cout << "With arguement " << a;
        }
};
int main(){
    Test t1;
    t1.print();
    cout << "\n\n";
    t1.print(5);
    return 0;
}