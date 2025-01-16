// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    ll count = 0;

    for (int l = 0; l < n; ++l)
    {
        ll minB = a[l];
        ll maxB = a[l];
        set<ll> se;
        se.insert(a[l]);

        for (int r = l; r < n; ++r)
        {
            if (r > l)
            {
                minB = min(minB, a[r]);
                maxB = max(maxB, a[r]);
                se.insert(a[r]);
            }

            if (maxB - minB == r - l && se.size() == r - l + 1) 
            {
                count++;
            }
        }
    }

    cout << count;
}
