#include <bits/stdc++.h>

using namespace std;
int a[1000000];
bool bt(int x)
{
    int du;
    if(x<11) return 0;
    while(x>0)
    {
        du=x%10;
        x=x/10;
        if(x%10>=du) return 0;
    }
    return 1;
}
bool ktnt(int x)
{
    if(x<2) return 0;
    for(int i=2;i<=sqrt(x);i++)
        if(x%i==0)
        return 0;
    return 1;
}
int main()
{int dem=0;
int n;
cin>>n;
for(int i=1;i<=n;i++){
    cin>>a[i];
    if(bt(a[i])&&ktnt(a[i]))
        dem++;
}
    cout <<dem << endl;
    return 0;
}
