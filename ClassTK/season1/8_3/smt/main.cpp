#include <bits/stdc++.h>

using namespace std;

int main()
{int a,n;
float s=0;
cin>>a>>n;
    for(int i=1;i<=n;i++)
    {
        s=s+1.0*pow(a,i)/(i);
    }
    cout<<s;
}
