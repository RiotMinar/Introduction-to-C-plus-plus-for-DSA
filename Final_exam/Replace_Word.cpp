#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,x;
        cin>>s>>x;
        for(int i=0;i<s.size();i++)
        {
            int cnt=0,index=0;
            if(s[i]==x[0])
            {
                for(int j=i;j<i+x.size();j++)
                {
                    if(s[j]==x[index])
                    {
                        cnt++;
                    }
                    else
                    {
                        break;
                    }
                    index++;
                }
                if(cnt==x.size())
                {
                    s.replace(i,x.size(),"#");
                }
            }

        }
        cout<<s<<endl;

    }
    return 0;
}