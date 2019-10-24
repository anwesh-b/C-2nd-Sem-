#include<iostream>
using namespace std;

class CommunityMember{
    protected:
        char name;
};

class Employee: public CommunityMember{
    protected:
        int eid;
};

class Student: public CommunityMember{
    private:
        int sid;
};

class Alumnus: public CommunityMember{
    private:
        int aid;
};

class Faculty: public Employee{
    protected:
        char Faculty;
};

class Staff: public Employee{
    private:
        char spost;
};

class Adminstrator: public Faculty{
    protected:
        char dept;
};

class Teacher: public Faculty{
    protected:
        char subject;
};

class AdminTeacher: public Adminstrator, public Teacher{
    private:    
        int salary;
};
