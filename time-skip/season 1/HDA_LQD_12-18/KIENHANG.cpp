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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m, k;
    cin >> n >> m >> k;
    ll a[n + 2];
    ll sum = 0;
    ll vtr = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
        if (sum >= m and vtr == 0)
        {
            vtr = i - 1;
        }
    }
    ll ans = 0;
    ll mac_dinh = a[k];
    sort(a + 1, a + 1 + vtr, greater<ll>());
    for (int i = 1; i <= vtr; i++)
    {
        ans += a[i];
        if (ans >= mac_dinh)
        {
            cout << i;
            break;
        }
    }
}