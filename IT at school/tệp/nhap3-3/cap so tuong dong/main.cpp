#include <bits/stdc++.h>

using namespace std;

int tcs(int x)
{
    int t=0,du;
        while(x>0)
        {
            du=x%10;
            t=t+du;
            x=x/10;
        }
        return t;
}
int main()
{   int a,b;
cin>>a>>b;
    if(tcs(a)==tcs(b))
    {
        cout<<tcs(a);
    }
    else cout<<"deo phai";
    return 0;
}
