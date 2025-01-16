#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll tcs(ll x)
{
    ll t = 0;
    while (x > 0)
    {
        t += x % 10;
        x /= 10;
    }
    return t;
}

ll tts(ll x)
{
    ll sum = 0;
    for (ll i = 2; i * i <= x; i++)
    {
        while (x % i == 0)
        {
            sum += tcs(i);
            x /= i;
        }
    }
    if (x > 1)
    {
        sum += tcs(x);
    }
    return sum;
}

bool check(ll x)
{
    return tts(x) == tcs(x);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll a, b, count = 0;
    cin >> a >> b;

    for (ll i = a; i <= b; i++)
    {
        if (check(i))
        {
            count++;
        }
    }

    cout << count << '\n';
    return 0;
}
