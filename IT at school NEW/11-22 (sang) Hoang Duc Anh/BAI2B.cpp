// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;

ll luythua(int n)
{
    ll result = 1;
    for (int i = 1; i < n; ++i)
        result *= 10;
    return result;
}

ll lcm(ll x, ll y)
{
    return x * (y / __gcd(x, y));
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y, z, n;
        cin >> x >> y >> z >> n;

        ll lcm_xyz = lcm(x, lcm(y, z));
        ll lower = luythua(n);
        ll upper = lower * 10 - 1;

        ll res = (lower + lcm_xyz - 1) / lcm_xyz * lcm_xyz;

        if (res <= upper)
            cout << res << "\n";
        else
            cout << -1 << "\n";
    }
}
