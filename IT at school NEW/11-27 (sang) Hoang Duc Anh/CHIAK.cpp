#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n, k;
    cin >> n >> k;

    vector<ll> d(k, 0);
    ll s = 0, res = 0;

    d[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        ll a;
        cin >> a;
        s = (s + a % k + k) % k;
        res += d[s];
        d[s]++;
    }

    cout << res << "\n";
    return 0;
}
