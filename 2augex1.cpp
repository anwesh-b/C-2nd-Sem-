    #include <iostream>
using namespace std;
class converter{
    private:
        int meter;
    public:
        converter(){
            meter = 0;
        }
        converter(float k){
            meter = k*10000;
        }
        void display(){
            cout << "Meter " << meter;
        }
};
int main(){
    // converter c1;
    float km;
    cout << "Enter distance in km" << endl;
    cin >> km;
    c1 = km;
    converter c1(km);
    c1.display();
    return 0;
}