// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
ll tcs(ll n)
{
    if (n == 0)
        return n % 10;
    return tcs(n / 10) + (n % 10);
}
bool check(ll n)
{
    ll d = sqrt(n);
    return d * d == n;
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    if (fopen("BAI03.INP", "r"))
    {
        freopen("BAI03.INP", "r", stdin);
        freopen("BAI03.OUT", "w", stdout);
    }
    ll n;
    cin >> n;
    ll d = tcs(n);
    if (check(d))
    {
        cout << d;
    }
    else
        cout << d % 11;
}