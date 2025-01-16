#include <bits/stdc++.h>
using namespace std;
const int Nmax=1e6;
int a[Nmax],b[Nmax],n,m;
void nhap(){
cin>>n>>m;
for(int i=1;i<=n;i++)
    cin>>a[i];
    for(int i=1;i<=m;i++)
    cin>>b[i];
}
void sapxep(){
sort(a+1,a+n+1);
sort(b+1,b+m+1);
}
void inkq(){
    long long d=0;
    int i=1,j=1;
while(i<=n&&j<=m){
    if(a[i]>b[j]){
        d++;
        i++;
        j++;
    }
    else
        i++;
}
cout<<d;
}
int main()
{
    nhap();
sapxep();
inkq();
    return 0;
}