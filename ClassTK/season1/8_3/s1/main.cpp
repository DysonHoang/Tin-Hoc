#include <bits/stdc++.h>

using namespace std;

int main()
{int a,b,n,s;
cin>>a>>b>>n;
    for(int i=1;i<=n;i++)
    {
        s+=1.0*a/(b+i);
    }
    cout <<fixed<<setprecision(2)<< s << endl;
    return 0;
}
