#include<bits/stdc++.h>
using namespace std;

class student
{
    private:

    int roll;
    string name;
    int sub1;
    int sub2;
    int sub3;

    public:

    student(int r, string n, int s1, int s2, int s3)
    {
        roll = r;
        name = n;
        sub1 = s1;
        sub2 = s2;
        sub3 = s3;
    }

    int total()
    {
        return sub1+ sub2 + sub3;
    }

    char grade()
    {
        int no = total() / 3;

        if(no >= 60)
            return 'A';
        else if(no <60 && no >= 40)
            return 'B';
        else
            return 'c';
    }
};

int main()
{
    int roll, sub1, sub2, sub3;
    string name;

    cout << "Enter roll no : ";
    cin >> roll;

    cout << "\n Enter name : ";
    cin >> name;

    cout << "\n Enter the subjects marks : ";
    cin >> sub1 >> sub2 >> sub3;

    student s(roll,name, sub1,sub2,sub3);

    cout << "Total marks is : " << s.total() << endl;
    cout << "Grade is : " << s.grade() << endl;
}