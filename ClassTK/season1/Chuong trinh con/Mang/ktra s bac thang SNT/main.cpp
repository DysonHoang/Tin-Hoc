#include <bits/stdc++.h>

using namespace std;
int n,a[10000000];
void nhap()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
}
bool ktSBT(int x)
{
    int du;
    if(x<11) return 0;
    while (x>0)
    {
        du=x%10;
        x=x/10;
        if(x%10>=du) return 0;
    }
    return 1;
}
bool ktSNT(int x){
    if(x<2) return 0;
        for(int i=2;i<=sqrt(x);i++)
        if(x%i==0)
        return 0;
    return 1;
}
void inkq(){
int d=0;
for(int i=1;i<=n;i++)
    if(ktSNT(a[i])&&ktSBT(a[i]))
    d++;
cout<<d;
}
int main()
{int dem=0;
    nhap();
    inkq();
    return 0;
}
