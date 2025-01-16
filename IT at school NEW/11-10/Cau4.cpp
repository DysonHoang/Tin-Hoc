// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    if (fopen("CAU4.INP", "r"))
    {
        freopen("CAU4.INP", "r", stdin);
        freopen("CAU4.OUT", "w", stdout);
    }
    ll n;
    cin >> n;
    int a[n + 2], max1[n + 2], max2[n + 2];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n - 3; i++)
    {
        for (ll j = 0; j < n - 2; j++)
        {
            max1[j] = max(max1[j], __gcd(a[i], a[j]));
        }
    }
    for (ll i = n - 1; i >= 4; i--)
    {
        for (ll j = i - 1; j >= 3; j--)
        {
            max2[j] = max(max2[j], __gcd(a[i], a[j]));
        }
    }
    int ans = 0;
    for (int i = 3; i < n - 1; i++)
        ans = max(ans, (max1[i - 1] + max2[i]));
    cout << ans;
}