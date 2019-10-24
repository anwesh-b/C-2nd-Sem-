//Overloading assignment operator without friend function
#include<iostream>
using namespace std;

class example{
    int x,y;
    public:
        example(){
            x=0;
            y=0;
        }
        example(int a, int b){
            x=a;
            y=b;
        }
        void operator =(example e){
            x=e.x;
            y=e.y;
        }
        void display(){
            cout << endl << "x = " << x;
            cout << endl << "y = " << y;
        }
};

int main(){
    example e1(20,11);
    example e2(10,5);
    cout << endl << "e1 obj";
    e1.display();
    cout << endl;
    cout << endl << "e2 obj";
    e2.display();
    e1=e2;
    cout << endl << "e1 obj";
    e1.display();
    return 0;
}