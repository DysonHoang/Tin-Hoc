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
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    map<ll, ll> mp;
    mp[0] = 1;
    ll t = 0, ans = 0;

    for (ll i = 0; i < n; i++)
    {
        t += a[i];
        ll d = t % k;
        if (d < 0)
            d += k;
        ans += mp[d];
        mp[d]++;
    }
    cout << ans;
}
