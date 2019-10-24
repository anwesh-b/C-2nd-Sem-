#include <iostream> 
using namespace std; 
class test{
    public:
        int sum(int x, int y=3){ // function with default argument
            int g = x+y;
            return g;
        }
        int sum(int a, int b, int c){  // function overloading.
            int d = a+b+c;
            return d;
        }
};
inline int addition(int *a, int *b){  // formal parameter is passed on by reference
    int sum = *a + *b;
    return sum;  // returning by reference 
}
int main(){
    test t1;
    int x = t1.sum(2);
    int y = t1.sum(2,3,4);
    int k =  addition(&x,&y);
    cout << "The sum is "<< k << endl;
}