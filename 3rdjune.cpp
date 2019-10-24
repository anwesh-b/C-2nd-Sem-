#include<iostream>
using namespace std;

class Point{
    private:
        int x,y;
    public:
        Point(int x1, int y1)
        {
            x=x1;
            y=y1;
        }
        Point(Point &mathibataaako)
        {
            x=mathibataaako.x;
            y=mathibataaako.y;
        }
        void show()
        {
            cout<<" x = "<< x << "\ny = "<< y <<endl;
        }
};
int main()
{
    Point p1(10,20);
    Point p2 = p1;
    p1.show();
    p2.show();
}