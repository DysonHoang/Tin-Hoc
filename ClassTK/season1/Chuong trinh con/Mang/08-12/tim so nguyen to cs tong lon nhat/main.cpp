#include <bits/stdc++.h>
using namespace std;
int a[1000000],n;
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
bool ktnt(int x){
if(x<2) return 0;
for(int i=2;i<=sqrt(x);i++)
    if(x%i==0)
    return 0;
return 1;
}

int main()
{  int max1=INT_MIN;
     cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
for(int i=1;i<=n;i++)
  if(ktnt(a[i])&&tcs(a[i])>max1)
    max1=a[i];
    cout<<max1;
    return 0;
}
