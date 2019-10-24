#include<iostream>
using namespace std;
#define PI 3.14
class circle{
    private:
        float a,radius;
    public:
        circle(){
            cout << "Enter the radius of the circle." << endl;
            cin >> radius;
        }
        void area(){
            a = PI * radius * radius;
            cout << "Area = " << a << endl; 
        }
};
int main(){
    circle c1;
    c1.area();
    return 0; 
}