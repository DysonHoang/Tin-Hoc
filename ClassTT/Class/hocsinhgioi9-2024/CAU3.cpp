// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n, k;
    cin >> n >> k;
    ll a[n + 1], d[n + 1] = {0};
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        d[i] = d[i - 1] + a[i];
    }

    ll max1 = LLONG_MIN;

    for (int i = k; i <= n; i++)
    {
        ll sum = d[i] - d[i - k];
        max1 = max(max1, sum);
    }

    cout << max1 << "\n";
    return 0;
}
