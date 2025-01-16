#include <bits/stdc++.h>

using namespace std;
int a[10000],n;
void nhap()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[1];
}
void tongchan()
{
    int t=0;
    for(int i=1;i<=n;i++)
        if(a[i]%2==0)
            t=t+a[i];
cout<<t;
}
int main()
{ nhap();
tongchan();
cout<<endl;
    return 0;
}
