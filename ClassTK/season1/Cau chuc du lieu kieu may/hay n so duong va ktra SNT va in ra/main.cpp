#include <bits/stdc++.h>

using namespace std;
int a[1000];
int snt(int x){
int n;
for(int i=2;i<=sqrt(x);i++)
    if(x%i==0)
        return 0;
    return 1;
}
int main()
{int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    if(snt(a[i]))
        cout<<a[i]<<" "<<endl;
    return 0;
}
