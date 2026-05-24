#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n;
        cin.ignore();
        cin>>s;
        int c[26]={0};
        for(int i=0;i<s.size();i++)
        {
            c[s[i]-'A']++;
        }
        int sum=0;
        for(int i=0;i<26;i++)
        {
            if(c[i]>0)
            {
                c[i]++;
            }
            sum=sum+c[i];
        }
        cout<<sum<<endl;

    }
    return 0;
}