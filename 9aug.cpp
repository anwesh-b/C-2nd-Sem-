#include<iostream>
using namespace std;

template<class A, class B>

void func(A x, B y){
    cout << "\nx = " << x << "\ny = " << y;
}

int main(){
    func(4,6.4);
    func(4.3,4.2);
    return 0;
}
