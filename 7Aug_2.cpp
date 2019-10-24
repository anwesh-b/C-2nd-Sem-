#include<iostream>
using namespace std;

int Getmax(int x,int y){
    return (x>y)?x:y;
}
float Getmax(float x, float y){
    return (x>y)?x:y;
}
double Getmax(double x, double y){
    return (x>y)?x:y;
}

int main(){
    int x=2,y=3;
    double m=2.0,n=3.0;
    float a=2.5,b=9.0;
    cout << "Maximum integer value is " << Getmax(x,y) << endl;
    cout << "Maximum float value is " << Getmax(m,n) << endl;
    cout << "Maximum double value is " << Getmax(a,b) << endl;
    return 0;
}
