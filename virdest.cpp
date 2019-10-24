//virtual destructor
#include<iostream>
using namespace std;

class base{
    public:
        virtual ~base(){
            cout << "\nBase class is destructed";
        }
};

class derived:public base{
    public:
        ~derived(){
            cout << "\nDerived class is destructed";
        }
};

int main(){
    base *ptr = new derived();
    delete ptr;
}