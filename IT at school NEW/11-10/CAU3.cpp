// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
const int MOD = 20232024;

ll somu(ll x, ll y)
{
    long long d = 1;
    while (y > 0)
    {
        if (y % 2)
            d = (d * x) % MOD;
        x = (x * x) % MOD;
        y /= 2;
    }
    return d;
}

int main()
{
    if (fopen("CAU3.INP", "r"))
    {
        freopen("CAU3.INP", "r", stdin);
        freopen("CAU3.OUT", "w", stdout);
    }
    ll n;
    cin >> n;
    ll ans = 1;
    ll m = n;
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            ans = (ans * (somu(3, i) + i) % MOD) % MOD;
            while (n % i == 0)
                n /= i;
        }
    }
    if (m == n)
    {
        cout << 1;
        return 0;
    }

    if (n > 1)
        ans = (ans * (somu(3, n) + n) % MOD) % MOD;
    cout << ans;
}