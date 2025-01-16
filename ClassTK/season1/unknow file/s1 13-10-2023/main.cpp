#include <bits/stdc++.h>

using namespace std;
float s=0;
int a,b,n;
int main()
{
    cin>>a>>b>>n;
    for(int i=1;i<=n;i++)
        s=s+1.0*a/(b+i);
    cout <<setprecision(2)<<fixed<<s;
    return 0;
}
