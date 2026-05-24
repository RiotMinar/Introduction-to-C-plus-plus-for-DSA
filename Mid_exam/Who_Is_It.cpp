#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int id,num; string name;char sec;
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        Student a,b,c;
        cin>>a.id>>a.name>>a.sec>>a.num;
        cin>>b.id>>b.name>>b.sec>>b.num;
        cin>>c.id>>c.name>>c.sec>>c.num;
        if(a.num>b.num || a.num==b.num)
        {
            if(a.num>b.num)
            {
                if(a.num>c.num || a.num==c.num)
                {
                    cout<<a.id<<" "<<a.name<<" "<<a.sec<<" "<<a.num<<endl;
                }
                else
                {
                    cout<<c.id<<" "<<c.name<<" "<<c.sec<<" "<<c.num<<endl;
                }
            }
            else
            {
                if(a.num>c.num || a.num==c.num)
                {
                    cout<<a.id<<" "<<a.name<<" "<<a.sec<<" "<<a.num<<endl;
                }
                else
                {
                    cout<<c.id<<" "<<c.name<<" "<<c.sec<<" "<<c.num<<endl;
                }
            }
        }
        else if(a.num<b.num)
        {
            if(b.num>c.num || b.num==c.num)
            {
                cout<<b.id<<" "<<b.name<<" "<<b.sec<<" "<<b.num<<endl;
            }
            else
            {
                cout<<c.id<<" "<<c.name<<" "<<c.sec<<" "<<c.num<<endl;
            }
        }
    }
    return 0;
}