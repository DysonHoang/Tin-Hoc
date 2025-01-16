#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<ll> d(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        d[i] = d[i - 1] + (s[i - 1] - 'a' + 1);
    }

    ll count = 0;
    for (ll i = 1, j = 1; i <= n; i++)
    {
        while (j <= n && d[j] - d[i - 1] < k)
        {
            j++;
        }
        if (j <= n)
        {
            count += (n - j + 1);
        }
    }

    cout << count;
    return 0;
}
