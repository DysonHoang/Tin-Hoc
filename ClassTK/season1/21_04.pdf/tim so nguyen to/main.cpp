#include <bits/stdc++.h>

using namespace std;
int a[100000];
bool ktnt(int x)
{
    if(x<2) return 0;
    for(int i=2;i<=sqrt(x);i++)
        if(x%i==0)
        return 0;
    return 1;
}
int tcs(int x){
    int t=0,du;
    while(x>0)
    {
        du=x%10;
        t+=du;
        x=x/10;
    }
return t;
}
int main()
{int n;
cin>>n;
for(int i=1;i<=n;i++)
    cin>>a[i];
    int max1= INT_MIN;
    for(int i=1;i<=n;i++)
        if(max1<a[i]&&ktnt(a[i]))
            max1=a[i];

    cout <<tcs(max1)<< endl;

}
