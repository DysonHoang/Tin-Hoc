// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;
ll TC3(ll n)
{
    ll k = n / 3;
    return 3 * k * (k + 1) / 2;
}
int main()
{
    if (fopen("SD3.INP", "r"))
    {
        freopen("SD3.INP", "r", stdin);
        freopen("SD3.OUT", "w", stdout);
    }
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll a, b;
    cin >> a >> b;
    ll ans = TC3(b) - TC3(a - 1);
    cout << ans;
}