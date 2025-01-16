// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll n, a, b;
    cin >> n >> a >> b;

    ll x = 0;
    while (x * a <= n)
    {
        ll remaining = n - x * a;
        if (remaining % b == 0)
        {
            ll y = remaining / b;
            cout << "YES" << "\n";
            cout << x << " " << y << "\n";
            return 0;
        }
        ++x;
    }
    cout << "NO" << "\n";
    return 0;
}
