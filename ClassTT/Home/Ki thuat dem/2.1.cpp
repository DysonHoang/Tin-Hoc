#include<bits/stdc++.h>
#include<map>
using namespace std;
int a[1000000];
int main()
{
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
    int max_count=0;
    for(const auto&pair:mp)
        if(pair.second>max_count)
            max_count=pair.second;
        cout<<max_count;
}
