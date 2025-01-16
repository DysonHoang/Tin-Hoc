// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;

ll l, r, res = 0;

ll cnt[Mx + 5];
void process()
{
    for (int i = 2; i <= Mx; i++)
    {
        if (cnt[i] == 0)
            for (int j = i; j <= Mx; j += i)
            {
                cnt[j]++;
            }
    }
}

ll reverse(ll x)
{
    ll d = 0;
    while (x > 0)
    {
        d = 10 * d + x % 10;
        x /= 10;
    }
    return d;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    process();
    cin >> l >> r;

    for (ll i = l; i <= r; i++)
    {
        if (i == reverse(i) && cnt[i] >= 3)
        {
            res++;
        }
    }

    cout << res;
}
