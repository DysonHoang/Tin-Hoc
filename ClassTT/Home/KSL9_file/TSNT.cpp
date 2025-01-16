#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, m;
    cin >> n >> m;

    vector<ll> s(n);
    for (ll i = 0; i < n; ++i)
    {
        cin >> s[i];
    }

    for (ll i = 0; i < m; ++i)
    {
        ll a, b;
        cin >> a >> b;
        a--;
        b--;

        ll max1 = LLONG_MIN;
        ll min1 = LLONG_MAX;

        for (ll j = a; j <= b; ++j)
        {
            max1 = max(max1, s[j]);
            min1 = min(min1, s[j]);
        }

        ll ans = max1 - min1;
        cout << ans << endl;
    }

    return 0;
}
