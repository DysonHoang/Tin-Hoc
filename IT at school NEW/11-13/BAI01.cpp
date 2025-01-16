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
    if (fopen("BAI01.INP", "r"))
    {
        freopen("BAI01.INP", "r", stdin);
        freopen("BAI01.OUT", "w", stdout);
    }
    ll l, r, a, b;
    cin >> l >> r >> a >> b;
    ll lcm = a * (b / __gcd(a, b));
    ll count = (r / lcm) - ((l - 1) / lcm);
    cout << count;
}
