//error hunxa ki hudaina check gareko
#include<iostream>
using namespace std;

class bau{
    public:
        void jagga(){
            cout << "bau ko jagga";
        }
};
class baccha:virtual public bau{
    public:
        void jagga(){
            cout << "keta baccha ko jagga";
        }
};

int main(){
    baccha b1;
    b1.jagga();
}
