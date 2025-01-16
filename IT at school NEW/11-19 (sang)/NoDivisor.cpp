// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 1000000007
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    ll sum1 = 0;
    ll ans = ((n % Mx) * ((n + 1) % Mx) / 2) % Mx;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            sum1 = (sum1 + i % Mx) % Mx;
            if (i != n / i)
            {
                sum1 = (sum1 + (n / i) % Mx) % Mx;
            }
        }
    }
    cout << (ans - sum1 + Mx - 7) % Mx;
}