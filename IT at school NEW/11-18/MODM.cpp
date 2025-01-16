// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n + 2);
    vector<ll> d(m, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        d[a[i] % m]++;
    }

    ll max1 = 0;

    if (d[0] > 0)
    {
        max1++;
    }

    for (int r = 1; r <= m / 2; r++)
    {
        if (r == m - r)
        {
            if (d[r] > 0)
            {
                max1++;
            }
        }
        else
        {
            max1 += max(d[r], d[m - r]);
        }
    }

    cout << max1 << endl;
    return 0;
}
