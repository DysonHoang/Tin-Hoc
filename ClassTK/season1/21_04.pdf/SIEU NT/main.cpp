#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;
int a[1000000];
bool nt(int x){
if(x<2) return 0;
for(int i=2;i<=sqrt(x);i++)
    if(x%i==0)
        return 0;
return 1;
}
bool snt(int x){
while(x>0&&nt(x)){
    x=x/10;
    return x==0;
}
}
int main()
{
int n,max1;
cin>>n;
for(int i=1;i<=n;i++){
    cin>>a[i];
if(snt(a[i])){
    max1=INT_MIN;
    max1=a[i];
}
    cout<<max1;
}
}
