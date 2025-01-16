// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll mx = 1532023;
ll n, m;
ll tong(ll c, ll mx)
{
    c = (c + 1) / 2;
    c = ((c % mx) * (c % mx)) % mx;
    return c;
}

ll tong1(ll mx)
{
    ll t = (n * m) % mx;
    ll s = ((t * (t + 1)) * 383006) % mx;
    return s;
}
ll tong2(ll mx)
{
    ll t = (n * m) % mx;
    ll s = ((t + t * t - n) * 383006) % mx;
    return s;
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    cin >> m >> n;
    if (n % 2 == 1)
    {
        if (m % 2 == 0)
        {
            cout << tong(m * n - 1, mx);
        }
        else
            cout << tong(m * n, mx);
    }
    else
    {
        if (m % 2 == 0)
            cout << tong1(mx);
        else
            cout << tong2(mx);
    }
}