// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;

ll a[1000005];
ll cut(ll n, ll mid)
{
    ll t = 0;
    for (int i = 1; i <= n; i++)
    {
        t = t + a[i] / mid;
    }
    return t;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ll res = 0;
    ll l = 1, r = 1000000000;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (cut(n, mid) >= k)
        {
            res = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << res;
}