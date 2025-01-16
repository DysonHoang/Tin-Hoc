// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    ll a[n + 2], b[n + 2];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    ll max1 = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            ll val = min((a[i] * a[j]), (b[i] * b[j]));
            max1 = max(max1, val);
        }
    }
    cout << max1;
}
