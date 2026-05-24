#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,x="Jessica";
    int flg=0;
    while(cin>>s)
    {
        if(s==x)
        {
            flg=1;
        }
    }
    if(flg==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}