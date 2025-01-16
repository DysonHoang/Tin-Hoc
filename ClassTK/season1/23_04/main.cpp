#include <bits/stdc++.h>

using namespace std;

int main()
{int a,b,n;
float s=0;
    cin>>a>>n;
    for(int i=1;i<=n;i++)
    {
        s+=1.0*pow(a,i)/i;
    }
    cout<<fixed<<setprecision(2)<<s<< endl;
    return 0;
}
