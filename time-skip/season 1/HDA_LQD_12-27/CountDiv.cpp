// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        ll res = 0;
        ll l, r, a, b;
        cin >> l >> r >> a >> b;
        ll lcm = a * (b / __gcd(a, b));
        res += r / a - (l - 1) / a;
        res += r / b - (l - 1) / b;
        res -= r / lcm - (l - 1) / lcm;
        cout << res << "\n";
    }
}