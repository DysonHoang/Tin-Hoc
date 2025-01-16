#include <bits/stdc++.h>
#define Mx 1000000007
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);

    ll n, k, p;
    cin >> n >> k >> p;

    ll a[1000000];
    for (ll i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }

    p = (p - 1) % n;

    ll res = 0;
    for (ll i = 0; i < k; ++i)
    {
        int idx = (p + i) % n + 1;
        res = (res + a[idx]) % Mx;
    }

    cout << res << endl;

    return 0;
}
