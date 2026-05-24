#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int cnt=0,cnt2=0;
        for(int i:a)
        {
            if(i%2==0)
            {
                cnt++;
            }
            else
            {
                cnt2++;
            }
        }
        if(n%2==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            if(2*cnt==n)
            {
                cout<<0<<endl;
            }
            else if(cnt>cnt2)
            {
                cout<<cnt-n/2<<endl;
            }
            else
            {
                cout<<cnt2-n/2<<endl;
            }
        }

    }
    return 0;
}