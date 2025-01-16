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
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n + 1, 0), d(k, -1);
    ll sum = 0, max1 = 0, start = -1, end = -1;
    d[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
        ll mod = (sum % k + k) % k;

        if (d[mod] != -1)
        {
            ll length = i - d[mod];
            if (length > max1)
            {
                max1 = length;
                start = d[mod] + 1;
                end = i;
            }
        }
        else
        {
            d[mod] = i;
        }
    }

    if (max1 == 0)
    {
        cout << 0;
    }
    else
    {
        cout << start << " " << end;
    }
}
