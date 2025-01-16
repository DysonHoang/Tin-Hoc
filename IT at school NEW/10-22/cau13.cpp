// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;
int demuoc(ll n)
{
    int count = 0;
    for (ll i = 1; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            count++;
            if (i != n / i)
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    if (fopen("CAU13.INP", "r"))
    {
        freopen("CAU13.INP", "r", stdin);
        freopen("CAU13.OUT", "w", stdout);
    }
    ll a, b;
    cin >> a >> b;
    ll gcd = __gcd(a, b);
    ll d = demuoc(gcd);
    cout << d;
}
