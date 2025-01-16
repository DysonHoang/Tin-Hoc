#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[10000000];
bool scp(ll x)
{
    ll tg = sqrt(x);
    return tg * tg == x;
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin>>n;
    for(ll i=n;;i++)
    {
        if(scp(i))
        {
            cout<<i;
            break;
        }
    }
}