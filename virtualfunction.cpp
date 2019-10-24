// // virtual declaration in base class is done as
// Class name{
//     public:
//         virtual <return type> <function name>(<argument list){
//             //Function body
//         }
// };


#include<iostream>
using namespace std;

class base
{
    public:
        virtual void show(){
            cout<<"This is base class\n";
        }
};

class der1: public base{
    public:
        void show(){
            cout << "This is der1 class\n";
        }
};

class der2: public base{
    public:
        void show(){
            cout << "This is der2 class\n";
        }
};

int main(){
    base *ptr[2];
    der1 d1;
    der2 d2;
    ptr[0]=&d1;
    ptr[1]=&d2;
    ptr[0]->show();
    ptr[1]->show();
    return 0;
}

