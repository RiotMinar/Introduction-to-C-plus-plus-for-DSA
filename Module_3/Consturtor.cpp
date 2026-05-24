#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    double gpa;
    Student(int r,int c,double g)
    {
        roll=r;
        cls=c;
        gpa=g;
    }
};
int main()
{
    Student rahim(10,5,5.00);
    Student karim(11,5,4.83);
    cout<<rahim.roll<<" "<<rahim.cls<<" "<<rahim.gpa<<endl;
    cout<<karim.roll<<" "<<karim.cls<<" "<<karim.gpa<<endl;
    return 0;
}