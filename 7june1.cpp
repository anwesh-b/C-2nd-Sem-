//WAP using concept of inheritance to display area of the square.
#include<iostream>.
using namespace std;
class len{
    protected:
        int l;
};
class ar: public len{
    public:
        void length(){
            cout << "Enter the length of the square : ";
            cin >> l;
        }
        void area(){
            cout << "The area of the square is "<< l*l;
        }
};
int main(){
    ar s1;
    s1.length();
    s1.area();
}