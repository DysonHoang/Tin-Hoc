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
    cin >> n;
    unordered_map<ll, ll> d;
    ll res = 0;
    ll a[n + 1];
    for (ll x, i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    for (ll i = 1; i <= n; i++)
    {
        res += d[a[i]];
        d[a[i] + k]++;
    }
    cout << res;
}