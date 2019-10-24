#include<iostream>
#include<math.h>
using namespace std;
template<class X>

X Sqrtt(X x){
    return  sqrt(x);
}

int main(){
    cout << "Int type " << Sqrtt<int>(4) << endl;
    cout << "Float type " << Sqrtt<float>(5.6) << endl;
    cout << "Int type " << Sqrtt<long>(7) << endl;
    cout << "Int type " << Sqrtt<double>(8) << endl;
}