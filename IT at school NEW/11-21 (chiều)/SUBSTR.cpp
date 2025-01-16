#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll k;
    string s;
    cin >> k >> s;

    ll dem = 0, res = 0;
    map<ll, ll> mp;
    mp[0] = 1;

    for (char c : s)
    {
        dem += (c == '1');

        if (mp.count(dem - k))
        {
            res += mp[dem - k];
        }

        mp[dem]++;
    }

    cout << res;
    return 0;
}
