// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll reverse(ll x)
{
    ll rev = 0;
    while (x > 0)
    {
        rev = rev * 10 + x % 10;
        x /= 10;
    }
    return rev;
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    if (fopen("BAI05.INP", "r"))
    {
        freopen("BAI05.INP", "r", stdin);
        freopen("BAI05.OUT", "w", stdout);
    }
    ll n;
    cin >> n;
    ll a[n + 2];
    a[1] = 1;
    for (ll i = 2; i <= n; i++)
    {
        a[i] = reverse(a[i - 1]) + 2;
    }

    cout << a[n];
    cout << "\n";
    ll kien = (n / 4 + n) * 2;
    if ((kien - 1) % 5 == 0)
        cout << kien + 1;
    else
        cout << kien - 1;
}