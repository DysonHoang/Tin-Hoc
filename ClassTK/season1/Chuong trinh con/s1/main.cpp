#include <bits/stdc++.h>

using namespace std;
int a,b;
int tcs(int x)
{
    int t=0, du;
    while(x>0)
    {
        du=x%10;
        t=t+du;
        x=x/10;
    }
    return t;
}
void nhap(){
cin>>a>>b;
}
int main()
{int nhap()
    if(tcs(a)>tcs(b))
        cout<<tcs(a)
        else
        cout<<tcs(b)
    return 0;
}
