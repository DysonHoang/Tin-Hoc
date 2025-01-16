#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll Mx = 1000000;
vector<ll> mp;

void sangnt(ll limit, vector<ll> &mp)
{
    vector<bool> SNT(limit + 1, true);
    for (ll p = 2; p * p <= limit; p++)
    {
        if (SNT[p])
        {
            for (ll i = p * p; i <= limit; i += p)
            {
                SNT[i] = false;
            }
        }
    }
    for (ll p = 2; p <= limit; p++)
    {
        if (SNT[p])
        {
            mp.push_back(p);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;
    ll limit = sqrt(n) + 1;
    sangnt(limit, mp);

    for (ll m1 : mp)
    {
        ll mpquare = m1 * m1;
        if (mpquare > n)
        {
            cout << mpquare;
            return 0;
        }
    }
    
    cout << -1;
}