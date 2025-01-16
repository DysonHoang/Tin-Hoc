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
    ll n, m;
    cin >> n >> m;
    ll c[2002];
    for (int i = 1; i <= m; i++)
    {
        ll x, r;
        cin >> x >> r;
        ll L = max(1ll * 1, x - r);
        ll R = min(n, x + r);
        for (int j = L; j <= R; j++)
        {
            c[j] = 1;
        }
    }
    ll res = 0;
    for (int i = 1; i <= n; i++)
    {
        res += c[i];
    }
    cout << res;
}