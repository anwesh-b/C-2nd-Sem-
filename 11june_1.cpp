#include<iostream>
using namespace std;

class Marks{
    private:
        char name[20];
        int cpp,mp,descrete,stats,maths;
    public:
        Marks(){ //constructor
            cout << "Enter your name: " << endl;
            cin >> name;
            cout << "\nEnter the marks in CPP, MP, Descrete, Stats, Maths" << endl;
            cin >> cpp >> mp >> descrete >> stats >> maths;
        }
        void disp(){    //InLine Function
            cout << "\nStudent name = " << name << "\nCPP = " << cpp << "\nMP = " << mp << "\nDescrete = "<< descrete << "\nStatistics = "<< stats << "\nMathematics = "<< maths << endl;
        }
        Marks(Marks &m){
            for(int i=0;i<20;i++){
                name[i]=m.name[i];
            }
            cpp=m.cpp;
            mp=m.mp;
            descrete=m.descrete;
            stats=m.stats;
            maths=m.maths;

        }
}; 
int main(){
    Marks m1;
    m1.disp();
    Marks m3(m1);
    m3.disp();
    // m2.disp();
}