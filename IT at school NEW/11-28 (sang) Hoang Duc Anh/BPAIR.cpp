#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll tcs(ll x)
{
    ll t = 0;
    while (x > 0)
    {
        t += x % 10;
        x /= 10;
    }
    return t;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;
    ll x, count = 0;
    vector<ll> p(100, 0);

    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        x = tcs(x);
        count += p[x];
        p[x]++;
    }

    cout << count << '\n';
    return 0;
}
