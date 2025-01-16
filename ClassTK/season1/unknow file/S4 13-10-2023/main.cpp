#include <bits/stdc++.h>

using namespace std;
float s=0;
long long x,n;
long long t=1,mau=1;
int main()
{
    cin>>x>>n;
    for(int i=1;i<=n;i++)
    {
        t=t*x;
        mau=mau*i;
        s=s+1.0*t/mau;
    }

    cout <<setprecision(2)<<fixed<<s;
    return 0;
}

