#include <bits/stdc++.h>
int a[1000000];
using namespace std;
int main()
{int n,S=0;
int dem=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    if(a[i]>0)
    {
        S=S+a[i];
        dem++;
    }
    }
    cout <<S<<" "<<dem<< endl;
    return 0;
}
