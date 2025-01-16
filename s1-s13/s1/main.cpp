#include <bits/stdc++.h>

using namespace std;
int a,b,c,n,m,k;
int lt(a,n){
    long long t=1;
    for(int i=1;i<=n;i++)
        t=t*a;
    return t;
}
void nhap(){
cin>>a>>b>>c>>m>>n>>k;
}
int main()
{
    int nhap()
    cout << lt(a,m)+lt(b,n)+lt(c,k) << endl;
    return 0;
}
