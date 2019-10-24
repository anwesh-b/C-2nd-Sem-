//WAP  to add two coordinates and display the result using this pointer

#include<iostream>
using namespace std;

class Coordinate{
    private:
        int x,y;
    public:
        Coordinate(int a, int b){
            x = a;
            y = b;    
        }
        void add(Coordinate a, Coordinate b){
            x = a.x + b.x;
            y = a.y + b.y;
        }
        void show(){
            cout << "\nx = " << x << "\ny = " << y;
        }
};

int show(){
    Coordinate c1(4,5),c2(2,3),c3;
    c3.add(c1,c2);
    c3.show();
    return 0;
}