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
    ll n, ans = 0;
    cin >> n;
    ll a[n + 2];
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (ll k = 1; k <= n / 2; k++)
    {
        bool dem = true;
        for (ll i = 1; i + k <= n; i++)
        {
            if (a[i] != a[i + k])
            {
                dem = false;
                break;
            }
        }
        if (dem)
        {
            ans = k;
        }
    }
    cout << ans;
}