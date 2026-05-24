#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        int n=s.size();
        int a[26]={0};
        for(int i=0;i<n;i++)
        {
            if(s[i]==' ')
            {continue;}
            a[s[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(a[i]>0)
            {
                for(int j=0;j<a[i];j++)
                {
                    cout<<(char)(i+'a');
                }
            }
        }
        cout<<endl;
    }
    return 0;
}