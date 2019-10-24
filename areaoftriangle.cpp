#include<iostream>
using namespace std;
class Triangle{
	private:
		float b,h,area;
	public:
		Triangle(){
			h=1.1;
		}
		void get(){
			cout << "Enter the breath";
			cin >> b;
		}
		float calc();
		void show(){
			cout << "Area" << calc() <<endl;
		}
};
float Triangle::calc(){
	return 0.5*h*b;
}	
int main()
{
	Triangle t1;
	cout << "Program to find the area of the right angled triangle.";
	t1.get();
	t1.show();
	return 0;
}
