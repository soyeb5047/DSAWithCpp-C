#include<bits/stdc++.h>
using namespace std;

class Employee
{
    private:
    int eid;
    string name;

    public:
    Employee(int e, string n)
    {
        eid = e;
        name = n;
    }

    int getId()
    {
        return eid;
    }

    string getName()
    {
        return name;
    }
};

class FullTime : public Employee
{
    private:
    int salary;

    public:
    FullTime(int e, int s,string n) : Employee(e, n)
    {
        salary = s;
    }

    int getSalary()
    {
        return salary;
    }
};

class PartTime : public Employee
{
    private:
    int wedge;

    public:
    PartTime(int e, int w, string n) : Employee(e, n)
    {
        wedge = w;
    }

    int getWedge()
    {
        return wedge;
    }
};



int main()
{
    FullTime f(1, 2000, "soyeb");
    PartTime p(2, 1000, "sahil");

    cout << f.getName() << " is a full time Employee id is : " << f.getId() << " and his salary is : " << f.getSalary() << endl;
    cout << p.getName() << " is the pert time employee whose id is : " << p.getId() << " and his salary is : " << p.getWedge() << endl;
}