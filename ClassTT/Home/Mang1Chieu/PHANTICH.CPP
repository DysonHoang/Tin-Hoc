#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
int32_t main()
{
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        int z=0;
        while(n%i==0)
        {
            z++;
            n/=i;
        }
        if(z>=1)
        cout<<i<<' '<<z<<endl;
    }
}