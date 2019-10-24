#include<iostream>
using namespace std;

class Template{
    private:
        int x,y;
    public:
        void getmax(){
            cout << "Getmax function withoit parameters" << endl;
        }
        void getmax(int a,int b){
            cout << "Getmax funxtion with parameters " << a << b << endl;
        }
};

int main(){
    Template t;
    t.getmax();
    t.getmax(5,10);
    return 0;
}