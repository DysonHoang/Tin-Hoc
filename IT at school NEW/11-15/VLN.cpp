// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;
ll a[10000005];
bool bs(ll l, ll r, ll x)
{
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (a[mid] == x)
            return 1;
        else if (a[mid] > x)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);

    ll n, k;
    cin >> n >> k;
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + 1 + n);
    if (bs(1, n, k))
        cout << "Y";
    else
        cout << "N";
}