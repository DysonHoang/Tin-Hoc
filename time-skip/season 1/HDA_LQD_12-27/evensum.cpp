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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[50005], s = 0, res = 0;
        ll d[2] = {0};
        d[0] = 1;

        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
            s += a[i];
            res += d[s % 2];
            d[s % 2]++;
        }
        cout << res << "\n";
    }
}
