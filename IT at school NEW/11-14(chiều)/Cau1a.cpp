// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll min1 = LLONG_MAX;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    if (fopen("CAU1A.INP", "r"))
    {
        freopen("CAU1A.INP", "r", stdin);
        freopen("CAU1A.OUT", "w", stdout);
    }
    ll a, b, c;
    cin >> a >> b >> c;
    ll gcd = __gcd(a, b);
    min1 = min(min1, (a / gcd) + (b / gcd));
    gcd = __gcd(b, c);
    min1 = min(min1, (b / gcd) + (c / gcd));
    gcd = __gcd(c, a);
    min1 = min(min1, (a / gcd) + (c / gcd));
    cout << min1;
}