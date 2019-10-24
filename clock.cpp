#include<iostream>
using namespace std;
class clock{
	private:
		int sec,minute,hour;
	public:
		clock{
		       sec=10;
		    }
		get(){
			cout << "Enter the minute";
			cin >> minute;
			cout << "Enter the hour";
			cin >> hour;
		}
		post(){
			cout << " Minute is " << minute << "Hour is " << hour;
		}
}
int main(){
	clock c1;
	c1.get();
	c1.post();
	return 0;
}
