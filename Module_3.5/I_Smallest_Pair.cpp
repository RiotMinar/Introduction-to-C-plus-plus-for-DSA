#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int min=INT_MAX;
       for(int i=0;i<n-1;i++)
       {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]+j-i<min)
            {
                min=a[i]+a[j]+j-i;
            }
        }
       }
       cout<<min<<endl;
        
    }
    
    return 0;
}