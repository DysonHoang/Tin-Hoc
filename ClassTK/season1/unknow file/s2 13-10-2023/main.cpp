#include <bits/stdc++.h>

using namespace std;
float s=0;
int a,n;
long long t=1;
int main()
{
    cin>>a>>n;
    for(int i=1;i<=n;i++)
        {
        t=t*a;
        s=s+1.0*t/i;
        }

    cout <<setprecision(2)<<fixed<<s;
    return 0;
}
