#include <bits/stdc++.h>

using namespace std;
int a[1000005];
int main()
{int n,k;
cin>>n>>k;
for(int i=0;i<n;i++) cin>>a[i];
for(int i=k;i<=n;i++)
{
    a[i]=a[i+1];
}
    --n;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
