#include<bits/stdc++.h>

using namespace std;
int n;
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
bool cp(int m)
{
    int tg=sqrt(m);
           return tg*tg==m;
}

int main()
{cin>>n;
    if(cp(tcs(n)))
        cout<<tcs(n)<<endl;
        else
        cout<<n<<endl;
    return 0;
}
