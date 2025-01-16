#include <bits/stdc++.h>
#define pii pair<int, int>
#define fi first
#define se second
#define int long long
using namespace std;
const int MOD = 1e9 + 7; /// dayucln
void solve()
{
    int n;
    cin >> n;
    int a[n + 5], b[n + 5];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    b[1] = a[1];
    b[n + 1] = a[n];
    for (int i = 2; i <= n; i++)
    {
        b[i] = a[i] * a[i - 1] / __gcd(a[i], a[i - 1]);
    }
    for (int i = 1; i <= n + 1; i++)
        cout << b[i] << ' ';
    cout << endl;
}
int32_t main()
{
    int t;
    cin >> t;
    for (; t--;)
    {
        solve();
    }
}