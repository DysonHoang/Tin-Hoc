#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll l, r;
    cin >> l >> r;

    if (l % 9 != 0)
    {
        l += 9 - l % 9;
    }
    if (r % 9 != 0)
    {
        r -= r % 9;
    }

    if (l > r)
    {
        cout << 0;
    }
    else
    {
        ll n = (r - l) / 9 + 1;
        ll sum = n * (l + r) / 2;
        cout << sum;
    }

    return 0;
}
