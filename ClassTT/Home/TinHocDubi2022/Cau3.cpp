#include <bits/stdc++.h>
#include <string>

using namespace std;;
int a[10000];
map<int,int>mp;
int main()
{

    int n;
    cin>>n;
        for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }

            for(int i=1;i<=n;i++)
    {
        mp[a[i]]++;
    }

int ans=0;
    for(const auto& mt : mp)
    {
        ans+=mt.second/2;
    }
    cout<<ans;

}