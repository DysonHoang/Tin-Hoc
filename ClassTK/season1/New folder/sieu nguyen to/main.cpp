#include<bits/stdc++.h>
using namespace std;
main()
{
    long long n,a[10005];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    long long k;
    cin>>k;
    for(int i=k;i<n;i++){
        a[i]=a[i+1];
    }
    for(int i=0;i<n-1;i++){
        cout<<a[i]<<" ";
    }
}
