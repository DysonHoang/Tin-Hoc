#include <bits/stdc++.h>
#include <string>

using namespace std;
int a[100000];
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    int l,r;
    long long s=0;
    cin>>l>>r;
    for(int i=l;i<=r;i++)
        if(i%2==0)
            s+=i;
        cout<<s;
}