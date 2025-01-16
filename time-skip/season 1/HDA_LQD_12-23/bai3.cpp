// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;

ll main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);

    ll n, d;
    cin >> n >> d;
    ll s[n];

    for (ll i = 0; i < n; ++i)
    {
        cin >> s[i];
    }

    sort(s, s + n);

    ll count = 0;
    ll i = 0;

    while (i < n - 1)
    {
        if (s[i + 1] - s[i] <= d)
        {
            count++;
            i += 2;
        }
        else
        {
            i++;
        }
    }

    cout << count << endl;
    return 0;
}
