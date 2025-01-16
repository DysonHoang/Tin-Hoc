#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,x=INT_MIN,s;
int a[1000005];
int32_t main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
    {
        s+=a[i];
       x=max(s,x);
       if(s<0)
        s=0;
    }
    cout<<x;
}   