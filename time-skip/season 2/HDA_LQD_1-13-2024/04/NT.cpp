#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long
using namespace std;

int main()
{
    ll l, r;
    cin >> l >> r;

    ll limit = sqrt(r);
    vector<bool> is_prime_small(limit + 1, true);
    is_prime_small[0] = is_prime_small[1] = false;
    for (ll i = 2; i * i <= limit; i++)
    {
        if (is_prime_small[i])
        {
            for (ll j = i * i; j <= limit; j += i)
            {
                is_prime_small[j] = false;
            }
        }
    }

    vector<bool> is_prime(r - l + 1, true);
    for (ll i = 2; i <= limit; i++)
    {
        if (is_prime_small[i])
        {
            ll start = max(i * i, (l + i - 1) / i * i);
            for (ll j = start; j <= r; j += i)
            {
                is_prime[j - l] = false;
            }
        }
    }
    if (l == 1)
        is_prime[0] = false;

    ll sum = 0, j = 1;
    for (ll i = 0; i <= r - l; i++)
    {
        if (is_prime[i])
        {
            sum = (sum + j * (l + i) % MOD) % MOD;
            j++;
        }
    }

    cout << sum;
    return 0;
}
