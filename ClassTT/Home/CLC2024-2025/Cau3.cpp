#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[200005],k,x,y;
main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        a[i]=1;
    for(int i=n+1;i<=2*n;i++)
        a[i]=0;
    int demnam=n;
    for(int i=1;i<=k;i++)
    {
        cin>>x>>y;
        if(x>y)
            swap(x,y);
        if(a[x]==0&&x<=n&&a[y]==1&&y>n)
            demnam++;
        if(a[x]==1&&x<=n&&a[y]==0&&y>n)
            demnam--;
        swap(a[x],a[y]);
        cout<<demnam<<endl;
    }
}