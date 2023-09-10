#include<bits/stdc++.h>
using namespace std;

class student
{
    public:
    int roll;
    string name;

    static int count;

    student(string n)
    {
        count++;
        roll = count;
        name = n;

    }

    void display()
    {
        cout << "Name of student is : " << name << " and his / her roll no is : " << roll << endl;
    }
};

int student::count = 0;

int main()
{
    student s1("soyeb");

    // cout << s1.count<< endl;
    
    student s2("sahil");
    student s3("pappu");
    student s4("tappu");
    student s5("tappu");
    student s6("tappu");

    s1.display();

    s4.display();

    

    cout << "Total students admitted in school is : " << student::count << endl;

}