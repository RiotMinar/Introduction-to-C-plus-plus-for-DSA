#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int a,b;
    cin>>a>>s>>b;
    if(s==">" && a>b)
    {
        cout<<"Right";
    }
    else if(s=="<" && a<b)
    {
        cout<<"Right";
    }
    else if(s=="=" && a==b)
    {
        cout<<"Right";
    }
    else
    {
        cout<<"Wrong";
    }
    return 0;
}