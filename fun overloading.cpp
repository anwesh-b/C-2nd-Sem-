#include<iostream>
using namespace std;
class triangle{
    protected:
        int base;
    public:
        void get(){
            cout << "Enter the base";
            cin >> base;
        }
};
class area:public triangle{
    private:
        int height;
    public:
        void get(){
            triangle::get();
            cout << "Enter height";
            cin >> height;
        }
        void disp(){
            int area;
            area = 0.5 * base * height;
            cout << "Area is " << area;
        }
};

int main(){
    area a1;
    a1.get();
    a1.disp();
    return 0;
}