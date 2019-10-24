#include <iostream>
using namespace std;

class counter {
    private:
        int count;
    public:
        counter(){
            cout << "\nEnter the inital value of counter"
        }
        void operator++(){
            cout << count;
        }
        void display(){
            cout << "\nCount = " << count;
        }
};

int main(){
    counter c1,c2;
    c1++;
    c2++;
    c1.display();
    c2.display();
    return 0;
}
