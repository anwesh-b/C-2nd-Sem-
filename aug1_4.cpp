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
        void show(){
            cout << endl << "x = " << x;
            cout << endl << "y = " << y;
        }
        friend example operator =(example &e1, example &e2){
            e1.x = e2.x;
            e1.y = e2.y;
            return e1;
        }
};

int main(){
    example e1(10,11);
    example e2(5,2);
    cout << "e1";
    e1.show();
    cout << "e2";
    e2.show();
    e1 = e2;
    cout << endl << "After overloading" << endl;
    e1.show();
    return 0;
}