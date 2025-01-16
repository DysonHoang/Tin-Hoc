// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;

    if (fopen("BAI5.INP", "r"))
    {
        freopen("BAI5.INP", "r", stdin);
        freopen("BAI5.OUT", "w", stdout);
    }
    vector<ll> a(n);
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    vector<ll> c(n, 0);

    for (ll x = 3; x < n; ++x)
    {
        map<ll, ll> mp;

        for (ll i = 0; i < x; ++i)
        {
            for (ll j = i + 1; j < x; ++j)
            {
                mp[a[i] + a[j]]++;
            }
        }

        for (ll k = 0; k < x; ++k)
        {
            ll idx = a[x] - a[k];
            if (mp.find(idx) != mp.end())
            {
                c[x] += mp[idx];
            }
        }
    }

    for (int i = 1; i < n; ++i)
    {
        cout << c[i];
        if (i < n - 1)
        {
            cout << " ";
        }
    }
}
