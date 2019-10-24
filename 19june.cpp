#include<iostream>
using namespace std;

class Test{
    private:
        int xyz;
    protected:
        void getdata(){
            cout << "Enter any number";
            cin >> xyz;
        }
};

class Harey{
    private:
        int abc;
    protected:
        void getdata(){
            cout << "Enter second number";
            cin >> abc;
        }
};

class Check:protected Test,protected Harey{
    private:
        int second;
    public:
        void testdata(){
            cout << "Hunxa ki hudaina\n";
            getdata(); //Test bata aako
            cout << "Bhayo :v\n";
            cout << "Second ko hunxa ki hudaina\n";
            getdata(); // harey bata aako
            cout << "La mya Bhaidira";
        }
};

int main(){
    Check c1;
    c1.testdata();
}