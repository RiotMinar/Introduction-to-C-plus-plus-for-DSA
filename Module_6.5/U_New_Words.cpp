#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>=65 && s[i]<=91)
        {
            s[i]+=32;
        }
    }
    int c[26]={0};
    for(int i=0;i<s.size();i++)
    {
        c[s[i]-'a']++;
    }
    int min=INT_MAX;
    for(int i=0;i<26;i++)
    {
        if(i==4 || i==6 || i==15 || i==19 || i==24)
        {
            if(c[i]<min)
            {
                min=c[i];
            }
        }
    }
    cout<<min;
    return 0;
}