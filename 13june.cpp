#include<iostream>
using namespace std;

class Department{
    private:
        int deptid, building_no;
        char address[30];
    public:
        void deptin(){
            cout << "Enter the department id : ";
            cin >> deptid;
            cout << "Enter the building no : ";
            cin >> building_no;
            cout << "Enter the address of the department : ";
            cin >> address;
        }
        void deptsh(){
            cout << "\nDept id = " << deptid << "\nBuilding no = " << building_no << "\nDept Address = " << address;
        }
};

class Employee: public Department{
    private:
        int eid;
        char ename[20], eaddress[20];
    public:
        void ein(){
            cout << "Enter the name of employee : ";
            cin >> ename;
            Department::deptin();
            cout << "Enter the employee id : ";
            cin >> eid;
            cout << "Enter the address of employee : ";
            cin >> eaddress;
        }
        void eout(){
            cout << "\nEmployee name = " << ename << "\nEmployee id = " << eid << "\nEmployee address = " << eaddress; 
            Department::deptsh();
        }
};

class Customer:public Department{
    private:
        int ctoken;
    public:
        void custin(){
            cout << "Enter the customer token";
            cin >> ctoken;
            Department::deptin();
        }
        void custout(){
            cout << "\nCustomer token = " << ctoken;
            Department::deptsh();
        }
};

int main(){
    Employee e1,e2;
    Customer c1;
    e1.ein();
    e2.ein();
    c1.custin();
    e1.eout();
    e2.eout();
    c1.custout();
}