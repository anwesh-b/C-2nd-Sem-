#include<iostream>
using namespace std;
class ok{
    private:
        int a,b;
    public:
        ok(){
            cout << "Enter the value of a and b" << endl;
            cin >> a >> b;
        }
        void display(){
            cout << "Okk\n";
        }
        void display(class ok)
        {
            cout << "a  = " << a << "\nb = " << b << endl;
        }
};
int main(){
    ok o1;
    o1.display();
    o1.display(o1);
}