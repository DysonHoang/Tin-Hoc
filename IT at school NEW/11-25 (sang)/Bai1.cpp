#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll tonguoc(ll n)
{
    ll sum = 0;
    for (ll i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            sum += i;
            if (i != n / i)
            {
                sum += n / i;
            }
        }
    }
    return sum;
}
bool ktnt(ll x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
            return 0;
    return 1;
}

int main()
{
    ll l, r;
    cin >> l >> r;

    if (ktnt(l) || ktnt(r))
    {
        cout << "NO";
        return 0;
    }
    ll left = tonguoc(l);
    ll right = tonguoc(r);

    if (left == right)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
