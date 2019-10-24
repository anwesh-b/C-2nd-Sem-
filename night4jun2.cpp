#include<iostream>
using namespace std;
class area{
    private:
        float length,breadth;
    public:
        area(){
            length=10;
            breadth=10;
        }
        area(int x,int y){
            length=5+x;
            breadth=10+y;
        }
        area(float x,int y){
            length = x;
            breadth = y;
        }
        void display(){
            cout << " Length is " << length << "\nBreadth is " << breadth << endl;
        }
};
int main()
{
    area a1;
    a1.display();
}