// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;

ll n, a[Mx + 5], b[Mx + 5], m;
bool check(ll x)
{
    ll j = 1;
    ll st = 1;
    for (ll i = 1; i <= n; i++)
    {

        if (a[i] > x)
            continue;
        while (j <= m and b[j] + a[i] < x)
        {
            j++;
        }
        if (j == m + 1)
            return 0;
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> b[i];
        ll l = 1, r = 1e18, ans;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (check(a[mid]))
        }
    }
}