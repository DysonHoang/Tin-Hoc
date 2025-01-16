#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, k;
ll a[1000000];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if (fopen("BAI6.INP", "r"))
    {
        freopen("BAI6.INP", "r", stdin);
        freopen("BAI6.OUT", "w", stdout);
    }
    ll sum = 0;
    cin >> n >> k;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        sum = sum + a[i];
    }
    if (sum % k == 0)
    {
        cout << a[0] << " " << a[n - 1] << "\n";
    }
    else
    {
        cout << 0;
    }
    return 0;
}