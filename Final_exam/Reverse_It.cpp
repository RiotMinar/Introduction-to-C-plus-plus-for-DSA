#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string nm;
    int cls,roll;
    char sec;
};
int main()
{
    int n;
    cin>>n;
    Student a[n];
    for(int i=0,j=n-1;i<n,j>=0;i++,j--)
    {
        cin>>a[i].nm>>a[i].cls>>a[j].sec>>a[i].roll;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].sec<<" "<<a[i].roll<<endl;
    }
    return 0;
}