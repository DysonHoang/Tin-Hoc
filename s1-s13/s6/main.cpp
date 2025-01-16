#include <bits/stdc++.h>

using namespace std;
int x;
bool hh(int n)
{
    int t=0;
    for(int i=1; i<=n/2; i++)
        if(n%i==0)
            t=t+i;
    return t==n;
}
int main()
{cout<<"X= ";
    cin>>x;
    if(hh(x))
        cout<<"X la so hoan hao";
    else
        cout<<"X ko la so hoan hao";
    return 0;
}
