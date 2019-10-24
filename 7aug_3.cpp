#include<iostream>
using namespace std;

template<class T>

T Getmax(T a,T b){
    return (a>b)?a:b;
}

int main(){
    int i=5,j=6;
    float m=2.5,n=5.3;
    double a=2.0,b=9.0;
    long l=10,c=5;
    cout << "Maximum int" << Getmax<int>(i,j);
    cout << "Maximum float" << Getmax<float>(m,n);
    cout << "Maximum double" << Getmax<double>(a,b);
    cout << "Maximum long" << Getmax<long>(l,c);
    return 0;
}

//Note the second program is valid for function template and it works for it but the first program 

// first program
// int main(){
//     int i=5,j=6;
//     float m=2.5,n=5.3;
//     double a=2.0,b=9.0;
//     long l=10,c=5;
//     cout << "Maximum int" << Getmax(i,j);
//     cout << "Maximum float" << Getmax(m,n);
//     cout << "Maximum double" << Getmax(a,b);
//     cout << "Maximum long" << Getmax(l,c);
//     return 0;
// }