#include <bits/stdc++.h>
using namespace std;
class student
{
    public:
    string nm;
    int cls,math,eng,sum,roll;
    char sec;
    
};
bool cmp(student l,student r)
{
    if(l.sum>r.sum)
    {
        return true;
    }
    else if(l.sum==r.sum)
    {
        if(l.roll<r.roll)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cin>>n;
    student a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].nm>>a[i].cls>>a[i].sec>>a[i].roll>>a[i].math>>a[i].eng;
        a[i].sum=a[i].math+a[i].eng; 
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++)
    {
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].sec<<" "<<a[i].roll<<" "<<a[i].math<<" "<<a[i].eng<<" "<<endl;
    }

    return 0;
}